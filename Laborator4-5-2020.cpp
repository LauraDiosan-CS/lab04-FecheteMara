#include "pch.h"
#include"Cheltuiala.h"
#include"TestCheltuiala.h"
#include"Repository.h"
#include"TestRepository.h"
#include"Controller.h"
#include"TestController.h"
#include<iostream>
using namespace std;
int main() {
	test_cheltuiala();
	tests_repo();
	test_controller();
	cout << "testele au trecut";
}


