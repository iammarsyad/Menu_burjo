#include <iostream>
#include <string>

#include "menu_adm.h"

using namespace std;

void menu_adm() {
	string choice_admin;
	menu_admin:
	system("cls");
	cout << "============== Selamat datang Admin ==============\n";
	cout << "\n1. Tambah Menu Makanan\n";
	cout << "2. Tambah Menu Minuman\n";
	cout << "3. Ganti Password Wifi\n";
	cout << "4. Keluar";
	cout << "\n\nMasukkan pilihan anda : "; cin >> choice_admin;
}