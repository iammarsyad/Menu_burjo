#include <iostream>
#include <string.h>
#include <conio.h>

#include "login_m.h"

using namespace std;

void login_m() {
	string username, password, choice_member;
	char ch;
	login_member:
	system("cls");
	cout << "\n\n\n\t\t\t\t =========================== Login Member ===========================";
	cout << "\n\t\t\t\t\t Username : "; cin >> username;
	cout << "\t\t\t\t\t Password : ";
	ch = _getch();
	while (ch != 13) {
		password.push_back(ch);
		cout << '*';
		ch = _getch();
	}
	if (username == "member" && password == "member") {
		system("cls");
		cout << "============== Selamat datang " << username << " ==============\n";
		cout << "\n1. Pesan Makan\n";
		cout << "2. Pesan Minum\n";
		cout << "3. Password Wifi\n";
		cout << "\nMasukkan Pilihan Anda : "; cin >> choice_member;
	}
	else {
		cout << "\nUsername / Password Salah !\n";
	}
}