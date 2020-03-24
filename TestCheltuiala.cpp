#include"pch.h"
#include <assert.h>
#include <string.h>
#include "TestCheltuiala.h"
#include"Cheltuiala.h"
#include<iostream>
using namespace std;
void test_cheltuiala() {

	Cheltuiala c1;
	c1.setZiua(1);
	c1.setLuna(2);

	char t1[] = "gaz";
	c1.setTip(t1);
	c1.setSuma(200);


	char t2[] = "curent";
	Cheltuiala c2(28, 3 , t2, 100);

	assert(c2.getZiua() == 28);
	assert(c2.getLuna() == 3);
	assert(strcmp(c2.getTip(), "curent") == 0);
	assert(c2.getSuma() == 100);


	char t3[] = "apa";

	Cheltuiala c3(30, 4, t3, 245);

	assert(c3.getZiua() == 30);
	assert(c3.getLuna() == 4);
	assert(strcmp(c3.getTip(), "apa") == 0);
	assert(c3.getSuma() == 245);

	cout << "testele au trecut" << endl;;
	
}