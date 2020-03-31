#include "pch.h"
#include "TestController.h"
#include"assert.h"
#include <iostream>
using namespace std;


void test_arange() {
	Repository r = Repository();
	Cheltuieli c1 = Cheltuieli(1, "August", 200, "apa");
	Cheltuieli c2 = Cheltuieli(1, "Iunie", 100, "apa");
	Cheltuieli c3 = Cheltuieli(3, "Aprilie", 25, "apa");
	Cheltuieli c4 = Cheltuieli(20, "August", 140, "curent");
	r.addElem(c1);
	r.addElem(c2);
	r.addElem(c3);
	r.addElem(c4);
	assert(r.getSize() == 4);
	cout << "ok-controller arange" << endl;
}
void test_add() {
	Repository r = Repository();
	Controller c = Controller(r);
	Cheltuieli c5 = Cheltuieli(29, "Februarie", 145, "mancare");
	c.adaugrare_element(c5);
	cout << "ok-controller arange" << endl;
}
void test_elimina_zi() {
	Repository r = Repository();
	Controller c = Controller(r);
	Cheltuieli c1 = Cheltuieli(30, "August", 200, "apa");
	c.elimina_dupa_zi(30);
	assert(r.getSize() == 0);
	cout << "ok-eliminare zi"<<endl;
}
void test_elimina_int() {
	Repository r = Repository();
	Controller c = Controller(r);
	Cheltuieli c1 = Cheltuieli(1, "August", 200, "apa");
	Cheltuieli c2 = Cheltuieli(1, "Iunie", 100, "apa");
	Cheltuieli c3 = Cheltuieli(3, "Aprilie", 25, "apa");
	Cheltuieli c4 = Cheltuieli(20, "August", 140, "curent");
	c.elimina_dupa_interval(1, 3);
	cout << "ok-eliminare interval" << endl;
}
void test_elimina_tip() {
	Repository r = Repository();
	Controller c = Controller(r);
	Cheltuieli c1 = Cheltuieli(1, "August", 200, "apa");
	Cheltuieli c2 = Cheltuieli(1, "Iunie", 100, "apa");
	Cheltuieli c4 = Cheltuieli(20, "August", 140, "curent");
	r.addElem(c1);
	r.addElem(c2);
	r.addElem(c4);
	c.elimina_dupa_tip("apa");
	cout << "ok-eliminare tip" << endl;
}
void test_afisare_dupa_luna() {
	Repository r = Repository();
	Controller c = Controller(r);
	Cheltuieli c1 = Cheltuieli(1, "August", 200, "apa");
	Cheltuieli c2 = Cheltuieli(1, "Iunie", 100, "apa");
	Cheltuieli c4 = Cheltuieli(20, "August", 140, "curent");
	r.addElem(c1);
	r.addElem(c2);
	r.addElem(c4);
	c.afisare_lista_dupa_luna("August");
	cout << "ok-afisare dupa luna" << endl;
}
void test_afisare_dupa_tip() {
	Repository r = Repository();
	Controller c = Controller(r);
	Cheltuieli c1 = Cheltuieli(1, "August", 200, "apa");
	Cheltuieli c2 = Cheltuieli(1, "Iunie", 100, "apa");
	Cheltuieli c4 = Cheltuieli(20, "August", 140, "curent");
	r.addElem(c1);
	r.addElem(c2);
	r.addElem(c4);
	c.afisare_dupa_tip("apa");
	cout << "ok-afisare dupa tip" << endl;
}
void test_afisare_dupa_tip_suma() {
	Repository r = Repository();
	Controller c = Controller(r);
	Cheltuieli c1 = Cheltuieli(1, "August", 200, "apa");
	Cheltuieli c2 = Cheltuieli(1, "Iunie", 100, "apa");
	Cheltuieli c4 = Cheltuieli(20, "August", 140, "curent");
	r.addElem(c1);
	r.addElem(c2);
	r.addElem(c4);
	c.afisare_dupa_tip_suma("apa",99);
	cout << "ok-afisare dupa tip suma" << endl;
}
void test_chelt_max() {
	Repository r = Repository();
	Controller c = Controller(r);
	Cheltuieli c1 = Cheltuieli(1, "August", 200, "apa");
	Cheltuieli c2 = Cheltuieli(1, "Iunie", 100, "apa");
	Cheltuieli c4 = Cheltuieli(20, "August", 140, "curent");
	r.addElem(c1);
	r.addElem(c2);
	r.addElem(c4);
	int e = 0;
	c.afisare_max_chelt();
	cout << "ok-afisare dupa tip suma" << endl;
}
void test_controller()
{

	
	test_arange();
	test_add();
	test_elimina_zi();
	test_elimina_int();
	test_elimina_tip();
	test_afisare_dupa_luna();
	test_afisare_dupa_tip();
	test_afisare_dupa_tip_suma();
	test_chelt_max();
	cout << "ok-clasa controller" << endl;
}