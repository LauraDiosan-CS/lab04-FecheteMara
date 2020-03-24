#include "pch.h"
#include "TestController.h"
#include"assert.h"
#include<string.h>
#include <iostream>
using namespace std;

void test_controller()
{
	Repository r = Repository();

	char t1[] = "curent";
	Cheltuiala c1(28, 1, t1, 100);
	r.addElem(c1);
	assert(r.getSize() == 1);


	char t2[] = "apa";
	Cheltuiala c2(30, 2, t2, 250);
	r.addElem(c2);
	assert(r.getSize() == 2);


	char t3[] = "gaz";
	Cheltuiala c3(1, 3, t3, 45);

	r.addElem(c3);
	assert(r.getSize() == 3);

	char t5[] = "apa";
	Cheltuiala c5(1, 4, t5, 145);

	char t6[] = "mancare";
	Cheltuiala c6(11, 10, t6, 237);

	Controller c = Controller(r);
	c.afisare_lista();
	c.elimina_dupa_zi(1);


	char t4[] = "apa";
	Cheltuiala c4(1, 4, t4, 145);
	r.updateCheltuieli(c4);
	c.afisare_lista();
}