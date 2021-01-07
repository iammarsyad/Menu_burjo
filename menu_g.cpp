#include <iostream>
#include <string>

#include "menu_g.h"
#include "makanminum_g.h"
#include "login.h"

using namespace std;

string choice_g;
void menu_g(){
	guest:
	system("cls");
	cout << "============== Selamat datang ==============\n";
	cout << "\n1. Pesan Makan & Minum\n";
	cout << "2. Keluar\n";

	cout << "\n Masukkan pilihan anda : ";cin >> choice_g;

	if (choice_g == "1") {
		makanminum_g();
	}

	else if (choice_g == "2") {
		system("cls");
		login();
	}

	else {
		cout << "Pilihan Anda Salah";
		goto guest;
	}
}
