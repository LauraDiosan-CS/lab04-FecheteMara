#include "pch.h"
#include "TestRepository.h"
#include"assert.h"
#include <iostream>
using namespace std;
void tests_repo_add_elem()
{
	//Arrange
	Repository r = Repository();
	Cheltuieli c1 = Cheltuieli(1, "mai",200, "pizza");
	Cheltuieli c2 = Cheltuieli(2, "martie", 100, "gaz");
	Cheltuieli c3 = Cheltuieli(2, "ianuarie", 50, "mancare");
	//Act
	r.addElem(c1);
	r.addElem(c2);
	r.addElem(c3);
	//Assert
	assert(r.getSize() == 3);


	cout << "ok-clasa repo add" << endl;

}
void tests_repo_get_all() {
	//Arrange
	Repository r = Repository();
	Cheltuieli c1 = Cheltuieli(1, "mai", 200, "pizza");
	//Act
	r.addElem(c1);
	Cheltuieli* v = r.getAll();
	//Assert
	assert(v[0].getZiua() == 1);
	assert(v[0].getLuna() == "mai");
	assert(v[0].getSuma() == 200);
	assert(v[0].getTip() == "pizza");
	cout << "ok-repo get all"<<endl;
}
void tests_repo_update() {

	Repository r = Repository();
	Cheltuieli c3 = Cheltuieli(2, "ianuarie", 50, "mancare");
	r.addElem(c3);
	Cheltuieli c4 = Cheltuieli(2, "aprilie", 120, "apa");
	r.updateCheltuieli(c4);
	cout << "ok-repo update" << endl;
}
void tests_repo() {
	tests_repo_add_elem();
	tests_repo_get_all();
	tests_repo_update();
}