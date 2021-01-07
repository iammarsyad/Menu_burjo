login_admin:
system("cls");
cout << "============== Login Admin ==============\n";
cout << "\n\tUsername : "; cin >> user_admin;
cout << "\tPassword : ";
ch = _getch();
while (ch != 13) {
	pass_admin.push_back(ch);
	cout << '*';
	ch = _getch();
}
if (user_admin == "admin" && pass_admin == "admin") {
	system("cls");
	cout << "============== Selamat datang Admin ==============\n";
	cout << "\n1. Tambah Menu Makanan\n";
	cout << "2. Tambah Menu Minuman\n";
	cout << "3. Ganti Password Wifi\n";
	cout << "4. Keluar";
	cout << "\n\nMasukkan pilihan anda : "; cin >> choice_admin;
}
else {
	cout << "\nMaaf Username atau Password anda Salah !";
}