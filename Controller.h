#pragma once
#include"Repository.h"
#include<string.h>
class Controller
{
private:
	Repository r;
public:
	Controller();
	Controller(Repository r);
	~Controller();
	//create read update delete
	void adaugrare_element(Cheltuiala c);
	void elimina_dupa_zi(int ziua);
	void afisare_lista();
	void update(Cheltuiala c);

};

