#pragma once
#include"Cheltuiala.h"
class Repository
{
private:
	int size;
	Cheltuiala v[100];
public:
	Repository();
	Repository(int, Cheltuiala);
	Repository(const Repository &c);
	~Repository();
	Repository& operator=(const Repository &c);
	void setSize(int setSize);
	int getSize();

	Cheltuiala* getAll();
	void addElem(Cheltuiala &c);

	void updateCheltuieli(Cheltuiala c);
	Cheltuiala* getLista();
	void setLista(Cheltuiala* list);


};

