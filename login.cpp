#include <iostream>
#include <string.h>
#include <conio.h>
#include <Windows.h>

#include "login.h"
#include "menu_mem.h"
#include "menu_g.h"



using namespace std;
void login(){
	system("cls");
	string choice, username, password;
	char ch;
Menu:
	system("cls");
	cout << "=======================================================";
	cout << "\n=              Selamat datang di Burjo                =";
	cout << "\n=======================================================\n";

	cout << "\n1. Masuk sebagai Member";
	cout << "\n2. Masuk sebagai Guest";
	cout << "\n3. Keluar";
	cout << "\n\nSilahkan masukkan pilihan Anda : "; cin >> choice;

	if (choice == "1") {
	login_member:
		username = "";
		password = "";
		system("cls");
		cout << "============================= Masuk sebagai Member =============================";
		cout << "\nUsername : "; cin >> username;
		cout << "Password : ";
		ch = _getch();
		while (ch != 13) {
			password.push_back(ch);
			cout << '*';
			ch = _getch();
		}
		if (username == "member" && password == "member") {
			menu_mem();
		}
		else {
			cout << "\nUsername / Password Salah !\n";
			Sleep(2000);
			goto Menu;
		}
	}

	else if (choice == "2") {
		menu_g();
	}

	else if (choice == "3") {
		exit;
	}

	else {
		cout << "\nMaaf pilihan Anda Salah !\n";
		Sleep(2000);
		system("cls");
		goto Menu;
	}
}