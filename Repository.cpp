#include "pch.h"
#include "Repository.h"
#include<iostream>
#include<string>
using namespace std;
//Descr: creaza un repo
//In: -
//Out: instanta a unui repo
Repository::Repository()
{
	this->size = 0;


}
//Descr: creaza un repo
//In: size, v
//Out:  instanta (cu info) a unui repo
Repository::Repository(int, Cheltuieli)
{
	this->size = size;

	for (int i = 0; i < this->size; i++)
	{
		this->v[i] = v[i];
	}

}

//Descr: creaza un repo folosind informatii de la alt repo
//In: un repo c
//Out: instanta unui repo cu informatii din c
Repository::Repository(const Repository &c)
{
	this->size = c.size;
	for (int i = 0; i < this->size; i++)
	{
		this->v[i] = c.v[i];
	}
}

//Descr: distruge v 
//In: v
//Out: - (destructor)
Repository::~Repository()
{

}
//Descr: creaza un noi repo (egal cu un repo c dat)
//Out: un noi repo (egal cu c)
Repository& Repository :: operator=(const Repository &c)
{

	if (this != &c)
	{
		this->setSize(c.size);
		for (int i = 0; i < c.size; i++)
		{
			v[i] = c.v[i];
		}

	}
	else
	{
		cout << "self asssign...";
	}
	return *this;
}

void Repository::setSize(int size)
{
	this->size = size;
}

//Descr: acces la marimea v
//In: un v
//Out: numarul lui v
int Repository::getSize()
{
	return this->size;
}

Cheltuieli* Repository::getAll()
{
	int i = 0;
	Cheltuieli* lista = new Cheltuieli[size];
	for (i; i < size; i++)
	{
		lista[i] = v[i];
	}
	return lista;
}
//adaugare element
void Repository::addElem(Cheltuieli &c)
{

	if (size == 50)
	{
		cout << "v are nr max de conturi" << endl;
	}
	else
	{
		this->v[this->size] = c;
		this->size += 1;
	}

}


//inlocuieste 
void Repository::updateCheltuieli(Cheltuieli c)
{
	int suma, ziua;
	string tip;
	ziua = c.getZiua();
	suma = c.getSuma();
	tip = c.getTip();
	for (int i = 0; i < this->size; i++)
	{
		if (this->v[i].getZiua() == c.getZiua())
		{
			this->v[i].setZiua(ziua);
			this->v[i].setSuma(suma);
			this->v[i].setTip(tip);
		}
	}
}

//returneaza lista
Cheltuieli* Repository::getLista()
{
	return this->v;
}

//seteaza o lista
void Repository::setLista(Cheltuieli* list)
{
	for (int i = 0; i < this->size; i++)
	{
		this->v[i] = list[i];
	}
}
