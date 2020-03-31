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

void Controller::adaugrare_element(Cheltuieli c) {
	Cheltuieli* lista;
	int size;
	size = r.getSize();
	lista = r.getLista();
	size = size + 2;
	lista[size - 2] = c;
	r.setSize(size - 1);
	r.setLista(lista);
	cout << "Adaugarea s-a efectuat cu succes!" << endl;


}

void Controller::elimina_dupa_zi(int ziua) {
	Cheltuieli* lista;
	int size,i=0;
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
void Controller::elimina_dupa_interval(int ziua1, int ziua2) {
	if (ziua1 > ziua2)
	{
		ziua1, ziua2 = ziua2, ziua1;
	}
	for (int i = ziua1; i <= ziua2; i++)
	{
		elimina_dupa_zi(i);
	}
	cout << "Eliminarea s-a efectuat cu succes!" << endl;
}
void Controller::elimina_dupa_tip(string tip) {
	Cheltuieli* lista;
	int i = 0, size;
	size = r.getSize();
	lista = r.getLista();
	while (i < size)
	{
		if (lista[i].getTip() == tip)
		{
			for (int j = i; j < size; j++)
			{
				lista[j] = lista[j + 1];
			}
			size--;
		}
		else
		{
			i++;
		}

	}
	r.setSize(size);
	r.setLista(lista);
	cout << "Eliminarea s-a efectuat cu succes!" << endl;

}
void Controller::afisare_lista()
{
	Cheltuieli* lista;
	int size;
	size = r.getSize();
	lista = r.getLista();
	for (int i = 0; i < size; i++)
	{
		cout << "CHELTUIALA "<<i<<" Ziua: " << lista[i].getZiua() << ", Luna: " << lista[i].getLuna() << ", Suma de bani: " << lista[i].getSuma() << ", Tip cheltuiala: " << lista[i].getTip() << endl;
	}
}
void Controller::afisare_lista_dupa_luna(string luna) {
	Cheltuieli* lista;
	int size;
	size = r.getSize();
	lista = r.getLista();
	for (int i = 0; i < size; i++) {
		if (lista[i].getLuna() == luna) {
			cout << "CHELTUIALA " << i<<" Luna: " << lista[i].getLuna() << ", Ziua: " << lista[i].getZiua() <<  ", Suma de bani: " << lista[i].getSuma() << ", Tip cheltuiala: " << lista[i].getTip() << endl;
		}
		
		
	}
}
void Controller::afisare_dupa_tip(string tip)
{
	Cheltuieli* lista;
	int size;
	size = r.getSize();
	lista = r.getLista();
	for (int i = 0; i < size; i++)
	{
		if (lista[i].getTip() == tip)
		{
			cout << "CHELTUIALA " << i << " Tip cheltuiala: " << lista[i].getTip() << ", Ziua: " << lista[i].getZiua() << ", Suma de bani: " << lista[i].getSuma() << " ,Luna: " << lista[i].getLuna() << endl;
		}
		
	}

}
void Controller::afisare_dupa_tip_suma(string tip, int suma) {
	Cheltuieli* lista;
	int size;
	size = r.getSize();
	lista = r.getLista();
	for (int i = 0; i < size; i++) {
		if ((lista[i].getTip() == tip) && (lista[i].getSuma() > suma) ){
			cout << "CHELTUIALA " << i << " Tip cheltuiala: " << lista[i].getTip() << ", Ziua: " << lista[i].getZiua() << ", Suma de bani: " << lista[i].getSuma() << " ,Luna: " << lista[i].getLuna() << endl;
		}
		
	}
}

void Controller::afisare_dupa_tip_suma_egala(string tip, int suma) {
	Cheltuieli* lista;
	int size;
	size = r.getSize();
	lista = r.getLista();
	for (int i = 0; i < size; i++) {
		if ((lista[i].getTip() == tip) && (lista[i].getSuma() == suma)) {
			cout << "CHELTUIALA " << i << " Tip cheltuiala: " << lista[i].getTip() << ", Ziua: " << lista[i].getZiua() << ", Suma de bani: " << lista[i].getSuma() << " ,Luna: " << lista[i].getLuna() << endl;
		}
		
	}
}

void Controller::propr_tip(string tip)
{
	Cheltuieli* lista;
	
	int size,  sold = 0;
	size = r.getSize();
	lista = r.getLista();
	for (int i = 0; i < size; i++)
	{
		if (lista[i].getTip() == tip)
		{

			sold = sold + lista[i].getSuma();
		}
	}

	cout << "Suma de bani pentru tipul precizat este:  " << sold << endl;

}

void Controller::afisare_max_chelt() {
	Cheltuieli* lista;
	int max = 0, size,ziua=0;
	size = r.getSize();
	lista = r.getLista();
	for (int i = 0; i < size; i++)
	{
		
			if (lista[i].getSuma() > max) {
				max = lista[i].getSuma();
				ziua = lista[i].getZiua();
			}
			
	}
	cout << "Ziua cu cea mai mare cheltuiala este: " << ziua<<"  cu suma: "<<max << endl;

}

void Controller::afisare_sume_dupa_zi()
{
	Cheltuieli* lista;
	int size,aux=0,aux1=0,aux2=0;
	size = r.getSize();
	lista = r.getLista();
	for (int i = 1; i <= size ; i++) {
		for (int j = 1; i <= size-i+1; i++) {
			aux1 = lista[i].getSuma();
			aux2 = lista[j].getSuma();
			if (aux1>aux2)
			{
				
				swap(aux1, aux2);
			}
			
			cout << "Ziua: " << " " << lista[i].getZiua() << " " << "Suma: " << lista[i].getSuma() << endl;
		}
		
	}
	for (int i = 0; i < size; i++) {
		cout << "Ziua: " << " " << lista[i].getZiua() << " " << "Suma: " << lista[i].getSuma() << endl;
	}
	
}

void Controller::afisare_sume_dupa_tip(string tip) {
	Cheltuieli* lista;
	int size, aux = 0, aux1 = 0, aux2 = 0;
	size = r.getSize();
	lista = r.getLista();
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (lista[j].getTip() == tip) {
				if (lista[j].getSuma() > lista[j+1].getSuma())
				{
					aux1 = lista[j].getSuma();
					aux2 = lista[j+1].getSuma();
					swap(aux1, aux2);
				}
			}
		}
		cout << "Tipul:" << " " << lista[i].getTip() << " " << "Ziua: " << " " << lista[i].getZiua() << " " << "Suma: " << lista[i].getSuma() << endl;
	}
	/*for (int j = 0; j < size; j++) {

		cout <<"Tipul:"<<" "<<lista[j].getTip() <<" "<<"Ziua: " << " " << lista[j].getZiua() << " " << "Suma: " << lista[j].getSuma() << endl;

	}*/
}
//eliminare element de pe o pozitie data
void Controller::eliminare_element(int pozitie, int &size, Cheltuieli* &lista)
{
	for (int i = pozitie; i < size - 1; i++)
	{
		lista[i] = lista[i + 1];
	}
	size--;
}
//filtrare dupa tip 
void Controller::filtrare_tip(string tip)
{
	Cheltuieli *lista;
	int size;
	size = r.getSize();
	lista = r.getLista();
	int i = 0;
	while (i < size)
	{
		if (lista[i].getTip() != tip)
		{
			eliminare_element(i, size, lista);
		}
		else
		{
			i++;
		}
	}
	r.setSize(size);
	r.setLista(lista);
	cout << "Filtrarea a fost efectuata! " << endl;
}
//filtrare dupa suma
void Controller::filtrare_suma(string tip, int suma)
{
	Cheltuieli *lista;
	int size;
	size = r.getSize();
	lista = r.getLista();
	int i = 0;
	while (i < size)
	{
		if ((lista[i].getTip() != tip) || (lista[i].getSuma() >= suma))
		{

			eliminare_element(i, size, lista);


		}
		else
		{
			i++;
		}
	}
	r.setSize(size);
	r.setLista(lista);

	cout << "Filtrarea a fost efectuata! " << endl;
}
void Controller::undo(Controller list[], int &n, Controller &c)
{
	if (n > 1)
	{
		n = n - 2;
		c = list[n];
		n = n + 1;
	}
	else {
		cout << "Ati ajuns la lista initiala."<<endl;
		c = list[0];
	}
}