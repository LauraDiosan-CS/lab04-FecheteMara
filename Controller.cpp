#include "pch.h"
#include "Controller.h"

Controller::Controller()
{
	this->r = Repository();

}
Controller::Controller(Repository r) {
	this->r = r;
}

Controller::~Controller()
{
}

void Controller::adaugrare_element(Cheltuiala c) {
	Cheltuiala* lista;
	int size;
	size = r.getSize();
	lista = r.getLista();
	size = size + 2;
	lista[size - 2] = c;
	r.setSize(size - 1);
	r.setLista(lista);

}

void Controller::elimina_dupa_zi(int ziua) {
	Cheltuiala* lista;
	int size, i = 0;
	size = r.getSize();
	lista = r.getLista();
	while (i < size) {
		if (lista[i].getZiua() == ziua) {
			for (int j = i; j < size; j++) {
				lista[j] = lista[j + 1];
			}
			size--;
		}
		i++;
	}
	r.setSize(size);
	r.setLista(lista);
}

void Controller::afisare_lista()
{
	Cheltuiala* lista;
	int size;
	size = r.getSize();
	lista = r.getLista();
	for (int i = 0; i < size; i++)
	{
		cout << "Cheltuieli- Ziua:" << lista[i].getZiua() << " Luna: " << lista[i].getLuna() << " Suma de bani: " << lista[i].getSuma() << " Tip cheltuiala: " << lista[i].getTip() << endl;
	}
}

//inlocuieste un element din lista 
void Controller::update(Cheltuiala c)
{
	Cheltuiala* lista;
	char* tip;
	int aux, size, ziua,suma,luna;
	luna = c.getLuna();
	tip = c.getTip();
	ziua = c.getZiua();
	size = r.getSize();
	lista = r.getLista();
	for (int i = 0; i < size; i++)
	{
		if ((lista[i].getZiua() == c.getZiua()) && (lista[i].getLuna() == c.getLuna()) && (lista[i].getTip() == c.getTip()))
		{
			lista[i].setLuna(luna);
			lista[i].setTip(tip);
			aux = c.getSuma();
			lista[i].setSuma(aux);

		}
	}
	r.setLista(lista);
}