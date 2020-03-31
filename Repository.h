#pragma once
#include"Cheltuieli.h"
class Repository
{
private:
	int size;
	Cheltuieli v[100];
public:
	Repository();
	Repository(int, Cheltuieli);
	Repository(const Repository &c);
	~Repository();
	Repository& operator=(const Repository &c);
	void setSize(int setSize);
	int getSize();
	
	Cheltuieli* getAll();
	void addElem(Cheltuieli &c);

	void updateCheltuieli(Cheltuieli c);
	Cheltuieli* getLista();
	void setLista(Cheltuieli* list);

};

