#include"pch.h"
#include "Cheltuieli.h"
#include<string.h>
#include<iostream>
using namespace std;
//Descr: creaza o cheltuiala 
//In: -
//Out:  instanta a unei cheltuieli
Cheltuieli::Cheltuieli()
{
	this->ziua = 1;
	this->luna = "";
	this->suma = 0;
	this->tip = "";

}
//Descr: creaza o chletuiala
//In: o zi
//Out: o instanta cu informatii despre o cheltuiala
Cheltuieli::Cheltuieli(int ziua,string luna, int suma, string tip)
{
	this->ziua = ziua;
	this->luna = luna;
	this->suma = suma;
	this->tip = tip;

}
//Descr: creaza o cheltuiala folosind infomatii de la o alta cheltuiala
//In: o cheltuiala c
//Out: o instanta a unei cheltuieli cu informatii din c
Cheltuieli::Cheltuieli(const Cheltuieli &c)
{
	this->ziua = c.ziua;
	this->luna = c.luna;
	this->suma = c.suma;
	this->tip = c.tip;
}
//Descr: distruge o cheltuiala
//In: o cheltuiala
//Out: - (destructor)
Cheltuieli::~Cheltuieli()
{

}
//Descr: schimba tipul unei cheltuilei
//In: tipul
//Out: cheltuiala cu tipul schimbat
void Cheltuieli::setTip(string tip) {
	this->tip = tip;
}
//Descr: schimba tipul unei cheltuilei
//In: tipul
//Out: cheltuiala cu tipul schimbat
void Cheltuieli::setLuna(string luna) {
	this->luna = luna;
}
//Descr: schimba ziua unei cheltuieli
//In: ziua
//Out: cheltuiala cu ziua schimbata
void Cheltuieli::setZiua(int ziua) {
	this->ziua = ziua;
}
//Descr: schimba numarul de bani ai unei cheltuieli
//In: suma
//Out: cheltuiala cu suma de bani schimbata
void Cheltuieli::setSuma(int suma) {
	this->suma = suma;
}
//Descr: acces la ziua unei cheltuieli
//In: o cheltuiala
//Out: ziua
int Cheltuieli::getZiua() {
	return this->ziua;
}
//Descr: acces la suma de bani a unei cheltuieli
//In: o cheltuiala
//Out: suma de bani
int Cheltuieli::getSuma() {
	return this->suma;
}
//Descr: acces la tipul unei cheltuieli
//In: o cheltuiala
//Out: tipul
string Cheltuieli::getTip() {
	return this->tip;
}
//Descr: acces la tipul unei cheltuieli
//In: o cheltuiala
//Out: tipul
string Cheltuieli::getLuna() {
	return this->luna;
}
//Descr: creaza o noua cheltuiala (egal cu o cheltuiala data c)
//In: o cheltuiala (c)
//Out: o noua cheltuiala(egala cu c)
Cheltuieli& Cheltuieli ::  operator =(const Cheltuieli &c)
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

bool Cheltuieli::operator<(Cheltuieli &c) {
	if (suma < c.suma)
		return true;
	return false;
}
bool Cheltuieli::operator>(Cheltuieli &c) {
	if (suma > c.suma)
		return true;
	return false;
}
bool Cheltuieli::operator==(Cheltuieli &c) {
	return  (this->suma == c.suma);
}