#include <iostream>
#include <string>
#include <Windows.h>

#include "makanminum_m.h"
#include "menu_mem.h"
#include "login.h"

using namespace std;

string nama_m = "member";
int ii, banyak_m, pilih_m, harga_m[10], porsi_m[10], total_m, bayar_m, total_harga_m, kembalian_m, diskon_m;

void makanminum_m() {
	system("cls");
	harga_m[10] = 0;
	cout << "=============================================================================================================\n";
	cout << "++---------------------------------------++   Daftar Menu Burjo   ++---------------------------------------++\n";
	cout << "=============================================================================================================\n";
	cout << "\nMakanan & Minuman :          |     Harga              | Makanan & Minuman :          |     Harga";
	cout << "\n1. Intel Goreng              | Rp. 8.000.-            | 8. Intel Goreng + Nasi       | Rp. 10.000.-";
	cout << "\n2. Intel Rebus               | Rp. 8.000.-            | 9. Intel Rebus + Nasi        | Rp. 10.000.-";
	cout << "\n3. Nasi                      | Rp. 3.000.-            | 10. Es teh                   | Rp. 3.000. -";
	cout << "\n4. Mie dok dok               | Rp. 10.000.-           | 11. Es jeruk                 | Rp. 3.000.-";
	cout << "\n5. Bubur kacang Ijo          | Rp. 5.000.-            | 12. Kopi Susu                | Rp. 4.000.-";
	cout << "\n6. Indomie Rebus             | Rp. 5.000.-            |";
	cout << "\n7. Indomie Goreng            | Rp. 5.000.-            | *Air Putih ambil sendiri (Gratis)";
	cout << "\n=============================================================================================================\n";

	cout << "\nNama Pemesan : " << nama_m << endl;
	cout << "Banyak Pesanan : "; cin >> banyak_m;

	for (ii = 1;ii <= banyak_m;ii++) {
		cout << "\n==============================================================================\n";
		cout << "Pesanan Ke " << ii << endl;
		cout << "Masukkan Nomor Makanan/Minuman          : "; cin >> pilih_m;
		cout << "Masukkan Porsi                          : "; cin >> porsi_m[ii];

		if (pilih_m == 1) {
			cout << "Anda memesan Intel Goreng " << porsi_m[ii] << " porsi_m";
			harga_m[ii] = 8000;
			cout << "\nTotal = Rp. " << harga_m[ii] * porsi_m[ii];
		}

		else if (pilih_m == 2) {
			cout << "Anda memesan Intel Rebus " << porsi_m[ii] << " porsi_m";
			harga_m[ii] = 8000;
			cout << "\nTotal = Rp. " << harga_m[ii] * porsi_m[ii];
		}

		else if (pilih_m == 3) {
			cout << "Anda memesan Nasi " << porsi_m[ii] << " porsi_m";
			harga_m[ii] = 3000;
			cout << "\nTotal = Rp. " << harga_m[ii] * porsi_m[ii];
		}

		else if (pilih_m == 4) {
			cout << "Anda memesan Mie dok dok " << porsi_m[ii] << " porsi_m";
			harga_m[ii] = 10000;
			cout << "\nTotal = Rp. " << harga_m[ii] * porsi_m[ii];
		}

		else if (pilih_m == 5) {
			cout << "Anda memesan Bubur Kacang Ijo " << porsi_m[ii] << " porsi_m";
			harga_m[ii] = 5000;
			cout << "\nTotal = Rp. " << harga_m[ii] * porsi_m[ii];
		}

		else if (pilih_m == 6) {
			cout << "Anda memesan Indomie Rebus " << porsi_m[ii] << " porsi_m";
			harga_m[ii] = 5000;
			cout << "\nTotal = Rp. " << harga_m[ii] * porsi_m[ii];
		}

		else if (pilih_m == 7) {
			cout << "Anda memesan Indomie Goreng " << porsi_m[ii] << " porsi_m";
			harga_m[ii] = 5000;
			cout << "\nTotal = Rp. " << harga_m[ii] * porsi_m[ii];
		}

		else if (pilih_m == 8) {
			cout << "Anda memesan Intel Goreng + Nasi " << porsi_m[ii] << " porsi_m";
			harga_m[ii] = 10000;
			cout << "\nTotal = Rp. " << harga_m[ii] * porsi_m[ii];
		}

		else if (pilih_m == 9) {
			cout << "Anda memesan Intel Rebus + Nasi " << porsi_m[ii] << " porsi_m";
			harga_m[ii] = 10000;
			cout << "\nTotal = Rp. " << harga_m[ii] * porsi_m[ii];
		}

		else if (pilih_m == 10) {
			cout << "Anda memesan Es Teh " << porsi_m[ii] << " porsi_m";
			harga_m[ii] = 3000;
			cout << "\nTotal = Rp. " << harga_m[ii] * porsi_m[ii];
		}

		else if (pilih_m == 11) {
			cout << "Anda memesan Es Jeruk " << porsi_m[ii] << " porsi_m";
			harga_m[ii] = 3000;
			cout << "\nTotal = Rp. " << harga_m[ii] * porsi_m[ii];
		}

		else if (pilih_m == 12) {
			cout << "Anda memesan Kopi Susu " << porsi_m[ii] << " porsi_m";
			harga_m[ii] = 4000;
			cout << "\nTotal = Rp. " << harga_m[ii] * porsi_m[ii];
		}

		else {
			cout << "Kode Salah !";
			break;
			menu_mem();
		}
	}

	total_harga_m = 0;
	for (ii = 1;ii <= pilih_m;++ii) {
		total_m = harga_m[ii] * porsi_m[ii];
		total_harga_m = total_harga_m + total_m;
	}

	cout << "\n==============================================================================\n";
	cout << "\nNama Pemesan                         : " << nama_m;
	cout << "\nTotal Harga                          : Rp. " << total_harga_m;
	cout << "\nBayar                                : Rp. "; cin >> bayar_m;
	cout << "Kembalian                            : Rp. " << bayar_m - total_harga_m << endl;
	cout << "\n================================ Terima Kasih ================================\n";

	Sleep(2000);
	login();
}