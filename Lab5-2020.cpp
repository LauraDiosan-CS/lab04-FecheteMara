#include "pch.h"
#include"TestCheltuieli.h"
#include"TestRepository.h"
#include"TestController.h"
#include <iostream>
#include<string>
using namespace std;
//citire
Repository citire()
{
	Repository p;
	Cheltuieli c;
	Cheltuieli* sir;
	int size = 0, ziua, suma;
	string tipul, luna;
	cout << "Dati lungimea listei de cheltuieli: " << endl;
	cout << "size= ";
	cin >> size;
	p.setSize(size);
	sir = p.getLista();
	cout << "Dati elementele liste: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Dati ziua: " << endl;
		cout << "ziua=";
		cin >> ziua;
		cout << "Dati luna: " << endl;
		cout << "luna=";
		cin >> luna;
		cout << "Dati suma: " << endl;
		cout << "suma=";
		cin >> suma;
		cout << "Dati tipul: " << endl;
		cout << "tipul=";
		cin >> tipul;
		c = Cheltuieli(ziua, luna, suma, tipul);
		sir[i] = c;

	}
	p.setLista(sir);
	return p;
}

void specificatii_meniu()
{
	cout << "Laboratorul 6" << endl;
	cout << "Alegeti o optiune: " << endl;
	cout << "0-Citire" << endl;
	cout << "1-Testare" << endl;
	cout << "2-Adaugare cheltuiala " << endl;
	cout << endl;

	cout << "3-Elimina toate cheltuielile dintr o zi" << endl;
	cout << "4-Elimina toate cheltuielile dintr un interval de timp" << endl;
	cout << "5-Elmina toate cheltuielile dupa tipul lor" << endl;
	cout << endl;

	cout << "6-Afisarea tuturor cheltuielilor din luna curenta " << endl;
	cout << "7-Afisare cheltuieli din lista dupa tip" << endl;
	cout << "8-Afisare cheltuieli din lista cu suma mai mare decat o suma data" << endl;
	cout << "9-Afisare cheltuieli din lista cu suma egala cu o suma data" << endl;
	cout << endl;

	cout << "10-Afisare suma dupa tip" << endl;
	cout << "11-Afisare zilei cu cele mai mari cheltuieli" << endl;
	cout << "12-Afisarea sumelor cheltuite zilnic în ordine descrescatoare " << endl;
	cout << "13-Afisarea sumelor cheltuite zilnic pentru mancare,ordonate crescator" << endl;
	cout << endl;

	cout << "14-Filtrarea listei de cheltuieli dupa tip " << endl;
	cout << "15-Filtrare- se pastreaza doar tranzactiile de un anumit tip cu valoare mai mica decat suma data" << endl;

	cout << "16-Afisare" << endl;
	cout << "17-Undo" << endl;

}
void specificatii_submeniu() {
	
}
int main()
{
	bool ok = true;
	int val = 0, index = 0;
	Controller lista[10];
	specificatii_meniu();

	Repository r;
	Cheltuieli c1 = Cheltuieli(1, "August", 200, "apa");
	Cheltuieli c2 = Cheltuieli(1, "Iunie", 100, "apa");
	Cheltuieli c3 = Cheltuieli(3, "Aprilie", 25, "apa");
	Cheltuieli c4 = Cheltuieli(20, "August", 140, "curent");
	r.addElem(c1);
	r.addElem(c2);
	r.addElem(c3);
	r.addElem(c4);
	Controller c = Controller(r);
	while (ok == true)
	{
		cout << "Varianta aleasa este: " << endl;
		cin >> val;
		cout << endl;
		if (val == 0)
		{
			r = citire();
			c = Controller(r);
			lista[index] = c;
			index++;

		}
		if (val == 1)
		{
			//teste functii
			teste_cheltuieli();
			tests_repo();
			test_controller();
		}
		if (val == 2)
		{
			//adaugare tranzactie dupa tip
			int ziua, suma;
			string tipul, luna;
			Cheltuieli v;
			cout << "Dati ziua: " << endl;
			cout << "ziua=";
			cin >> ziua;
			cout << "Dati luna: " << endl;
			cout << "luna=";
			cin >> luna;
			cout << "Dati suma: " << endl;
			cout << "suma=";
			cin >> suma;
			cout << "Dati tipul: " << endl;
			cout << "tipul=";
			cin >> tipul;
			v = Cheltuieli(ziua, luna, suma, tipul);
			c.adaugrare_element(v);
			lista[index] = c;
			index++;

		}
		if (val == 3)
		{
			//elimita poate tranzactiile dintr o zi
			int ziua;
			cout << "Dati ziua=";
			cin >> ziua;
			c.elimina_dupa_zi(ziua);
			lista[index] = c;
			index++;
			cout << "Eliminarea s-a efectuat cu succes!" << endl;


		}
		if (val == 4)
		{
			//elimita poate tranzactiile din interval
			int a, b;
			cout << "Dati intervalul: "<<endl;
			cout << "a=";
			cin >> a;
			cout << "b=";
			cin >> b;
			c.elimina_dupa_interval(a, b);
			lista[index] = c;
			index++;
		}
		if (val == 5)
		{
			//elimita poate tranzactiile dupa tip
			string tip;
			cout << "Dati tipul=";
			cin >> tip;
			c.elimina_dupa_tip(tip);
			lista[index] = c;
			index++;
		}
		if (val == 6)
		{
			//afisare tranzactii din lista dupa luna
			string luna;
			cout << "Dati luna: ";
			cin >> luna;
			c.afisare_lista_dupa_luna(luna);

		}
		if (val == 7)
		{
			//afisare tranzactii din lista dupa tip
			string tip;
			cout << "Dati tipul: ";
			cin >> tip;
			c.afisare_dupa_tip(tip);

		}
		if (val == 8)
		{
			//afisare tranzactii din lista cu suma mai mare decat suma data
			int suma;
			string tip;
			cout << "Dati tipul:";
			cin >> tip;
			cout << "Dati suma:";
			cin >> suma;
			c.afisare_dupa_tip_suma(tip, suma);
		}
		if (val == 9)
		{
			//afisare tranzactii din lista cu suma egala cu o suma data
			int suma;
			string tip;
			cout << "Dati tipul:";
			cin >> tip;
			cout << "Dati suma:";
			cin >> suma;
			c.afisare_dupa_tip_suma(tip, suma);
		}
		if (val == 10)
		{
			//afisare suma duntr o zi
			string tip;
			cout << "Dati tipul:";
			cin >> tip;
			c.propr_tip(tip);
		}
		if (val == 11)
		{
			//afisare zilei cu cele mai mari cheltuieli

			c.afisare_max_chelt();
		}
		if (val == 12)
		{
			//Afișarea sumelor cheltuite zilnic în ordine descrescătoare
			
			c.afisare_sume_dupa_zi();
		}
		if (val == 13)
		{
			//Afisarea sumelor cheltuite zilnic pt mancare cr
			string tip;
			cout << "Dati tip: ";

			cin >> tip;
			c.afisare_sume_dupa_tip(tip);
		}
		if (val == 14)
		{
			//filtrare-se pastreaza doar tranzactiile de un anumit tip
			string tip;
			cout << "Dati tipul: ";
			cin >> tip;
			c.filtrare_tip(tip);
			lista[index] = c;
			index++;

		}
		if (val == 15)
		{
			string tip;
			int suma;
			//filtrare- se pastreaza doar tranzactiile de un anumit tip cu valoare mai mica decat suma data
			cout << "Dati tipul: ";
			cin >> tip;
			cout << "Dati suma:";
			cin >> suma;
			c.filtrare_suma(tip, suma);
			lista[index] = c;
			index++;
			
		}
		if (val == 16)
		{
			//afisare lista
			c.afisare_lista();
		}
		if (val == 17) {
			c.undo(lista, index, c);
		}

	}


	return 0;
}


