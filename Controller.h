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
	void adaugrare_element(Cheltuieli c);

	void elimina_dupa_zi(int ziua);
	void elimina_dupa_interval(int ziua1, int ziua2);
	void elimina_dupa_tip(string tip);

	void afisare_lista_dupa_luna(string luna);
	void afisare_dupa_tip(string tip);
	void afisare_dupa_tip_suma(string tip, int suma);
	void afisare_dupa_tip_suma_egala(string tip, int suma);

	void propr_tip(string tip);
	void afisare_max_chelt();
	void afisare_sume_dupa_zi();
	void afisare_sume_dupa_tip(string tip);

	void filtrare_tip(string tip);
	void eliminare_element(int pozitie, int &size, Cheltuieli* &lista);
	void filtrare_suma(string tip, int suma);

	void afisare_lista();
	void undo(Controller list[], int &n, Controller &c);

};

