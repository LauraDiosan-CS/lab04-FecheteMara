#include"pch.h"
#include <string.h>
#include "Cheltuiala.h"

//Descr: creaza o cheltuiala 
//In: -
//Out:  instanta a unei cheltuieli
Cheltuiala::Cheltuiala() {
	this->ziua = 0;
	this->luna = 0;
	this->tip = NULL;
	this->suma = 0;
}
//Descr: creaza o chletuiala
//In: o z,l,t,s
//Out: o instanta cu informatii despre o cheltuiala
Cheltuiala::Cheltuiala(int z,int l,char* t, int s) {
	this->ziua = z;
	this->luna = l;
	this->tip = new char[strlen(t) + 1];
	strcpy_s(this->tip, strlen(t) + 1, t);
	this->suma = s;
}

//Descr: creaza o cheltuiala folosind infomatii de la o alta cheltuiala
//In: o cheltuiala c
//Out: o instanta a unei cheltuieli cu informatii din c
Cheltuiala::Cheltuiala(const Cheltuiala &c) {
	this->ziua = c.ziua;
	this->luna = c.luna;
	this->tip = new char[strlen(c.tip) + 1];
	strcpy_s(this->tip, strlen(c.tip) + 1, c.tip);
	this->suma = c.suma;
}

//Descr: distruge o cheltuiala
//In: o cheltuiala
//Out: - (destructor)
Cheltuiala::~Cheltuiala() {
	
	if (this->tip != NULL) {
		delete[] this->tip;
		this->tip = NULL;
	}


}
//get-ers
int Cheltuiala::getZiua() {
	return this->ziua;
}
int Cheltuiala::getLuna() {
	return this->luna;
}

char* Cheltuiala::getTip() {
	return this->tip;
}
int Cheltuiala::getSuma() {
	return this->suma;
}
//set-ers
void Cheltuiala::setZiua(int z) {
	this->ziua = z;
}
void Cheltuiala::setLuna(int l) {
	this->luna = l;
}

void Cheltuiala::setTip(char* t) {
	if (this->tip) {
		delete[] this->tip;
	}
	this->tip = new char[strlen(t)+1];
	strcpy_s(this->tip, strlen(t)+1 , t);
}
void Cheltuiala::setSuma(int s) {
	this->suma = s;
}
//Descr: creaza o noua cheltuiala (egal cu o cheltuiala data c)
//In: o cheltuiala (c)
//Out: o noua cheltuiala(egala cu c)
Cheltuiala& Cheltuiala ::  operator =(const Cheltuiala &c)
{
	if (this != &c)
	{
		this->setZiua(c.ziua);
		this->setLuna(c.luna);
		this->setSuma(c.suma);
		this->setTip(c.tip);


	}
	else
	{

	}
	return *this;
}
