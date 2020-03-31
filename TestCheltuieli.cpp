#include"pch.h"
#include "TestCheltuieli.h"
#include"assert.h"
#include <iostream>
using namespace std;
void teste_cheltuieli()
{
	//Arrange
	Cheltuieli c1 = Cheltuieli();
	Cheltuieli c2 = Cheltuieli();
	//Act
	c2.setZiua(1);
	c2.setLuna("Aprilie");
	c2.setSuma(250);
	c2.setTip("gaz");
	//Assert
	assert(c1.getZiua() == 1);
	assert(c1.getLuna() == "");
	assert(c1.getSuma() == 0);
	assert(c1.getTip() == "");
	assert(c2.getZiua() == 1);
	assert(c2.getLuna() == "Aprilie");
	assert(c2.getSuma() == 250);
	assert(c2.getTip() == "gaz");

	cout << "ok-clasa cheltuieli" << endl;



}

