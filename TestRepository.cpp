#include "pch.h"
#include "TestRepository.h"
#include"assert.h"
#include<string.h>
#include <iostream>
using namespace std;
void tests_repo()
{
	Repository r = Repository();
	assert(r.getSize() == 0);

	char t1[] = "curent";
	Cheltuiala c1(28, 1, t1, 100);

	r.addElem(c1);
	assert(r.getSize() == 1);

	char t2[] = "apa";
	Cheltuiala c2(30, 2, t2, 250);

	r.addElem(c2);
	assert(r.getSize() == 2);

	char t3[] = "gaz";
	Cheltuiala c3(30, 2, t3, 250);

	r.addElem(c3);
	assert(r.getSize() == 3);


	char t4[] = "mancare";
	Cheltuiala c4(30, 2, t4, 250);

	r.addElem(c2);
	assert(r.getSize() == 4);

	cout << "testele au trecut"<<endl;

}

