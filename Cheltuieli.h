#pragma once
#include<string>
#include<iostream>
using namespace std;
class Cheltuieli
{
private:
	int ziua;
	string luna;
	int suma;
	string tip;
public:
	Cheltuieli();
	Cheltuieli(int ziua, string luna, int suma, string tip);
	Cheltuieli(const Cheltuieli &c);
	~Cheltuieli();
	Cheltuieli& operator=(const Cheltuieli &c);
	void setZiua(int ziua);
	void setSuma(int suma);
	void setTip(string tip);
	void setLuna(string luna);
	int getZiua();
	int getSuma();
	string getTip();
	string getLuna();
	bool operator<(Cheltuieli &c);
	bool operator>(Cheltuieli &c);
	bool operator==(Cheltuieli &c);
};

