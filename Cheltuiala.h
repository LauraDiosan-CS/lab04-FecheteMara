#ifndef CHELTUIALA_H
#define CHELTUIALA_H
#include"pch.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

class Cheltuiala {
private:
	int ziua;
	int luna;

	char* tip;
	int suma;
public:
	Cheltuiala();
	Cheltuiala(int z, int l, char* t, int s);
	Cheltuiala(const Cheltuiala &c);
	~Cheltuiala();
	int getZiua();
	int getLuna();

	char*getTip();
	int getSuma();

	void setZiua(int z);
	void setLuna(int l);

	void setTip(char* t);
	void setSuma(int s);
	Cheltuiala& operator=(const Cheltuiala &c);



};

#endif


