#include <iostream>
#include <string>
#include <Windows.h>

#include "login.h"
#include "menu_mem.h"
#include "makanminum_m.h"

using namespace std;

void menu_mem() {
	menu:
	string choice_member;
	system("cls");
	cout << "============== Selamat datang ==============\n";
	cout << "\n1. Pesan Makan & Minum\n";
	cout << "2. Password Wifi\n";
	cout << "3. Keluar\n";
	cout << "\nMasukkan Pilihan Anda : "; cin >> choice_member;

	if (choice_member == "1") {
		makanminum_m();
	}

	else if (choice_member == "2") {
		system("cls");
		cout << "Password Wifi : burjomantap123";
		Sleep(2000);
		goto menu;
	}

	else if (choice_member == "3") {
		login();
	}
}