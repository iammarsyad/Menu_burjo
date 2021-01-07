#include <iostream>
#include <string>
#include <Windows.h>

#include "makanminum_g.h"
#include "menu_g.h"
#include "login.h"

using namespace std;

string nama_g, lagi;
int i, banyak, pilih_g, harga[10], porsi[10], total, bayar, total_harga, kembalian;

void makanminum_g() {
	system("cls");
	harga[10] = 0;
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

	cout << "\nNama Pemesan : "; cin >> nama_g;
	cout << "Banyak Pesanan : "; cin >> banyak;

	for (i = 1;i <= banyak;i++) {
		cout << "\n==============================================================================\n";
		cout << "Pesanan Ke " << i << endl;
		cout << "Masukkan Nomor Makanan/Minuman          : "; cin >> pilih_g;
		cout << "Masukkan Porsi                          : "; cin >> porsi[i];

		if (pilih_g == 1) {
			cout << "Anda memesan Intel Goreng " << porsi[i] << " porsi";
			harga[i] = 8000;
			cout << "\nTotal = Rp. " << harga[i] * porsi[i];
		}

		else if (pilih_g == 2) {
			cout << "Anda memesan Intel Rebus " << porsi[i] << " porsi";
			harga[i] = 8000;
			cout << "\nTotal = Rp. " << harga[i] * porsi[i];
		}

		else if (pilih_g == 3) {
			cout << "Anda memesan Nasi " << porsi[i] << " porsi";
			harga[i] = 3000;
			cout << "\nTotal = Rp. " << harga[i] * porsi[i];
		}

		else if (pilih_g == 4) {
			cout << "Anda memesan Mie dok dok " << porsi[i] << " porsi";
			harga[i] = 10000;
			cout << "\nTotal = Rp. " << harga[i] * porsi[i];
		}

		else if (pilih_g == 5) {
			cout << "Anda memesan Bubur Kacang Ijo " << porsi[i] << " porsi";
			harga[i] = 5000;
			cout << "\nTotal = Rp. " << harga[i] * porsi[i];
		}

		else if (pilih_g == 6) {
			cout << "Anda memesan Indomie Rebus " << porsi[i] << " porsi";
			harga[i] = 5000;
			cout << "\nTotal = Rp. " << harga[i] * porsi[i];
		}

		else if (pilih_g == 7) {
			cout << "Anda memesan Indomie Goreng " << porsi[i] << " porsi";
			harga[i] = 5000;
			cout << "\nTotal = Rp. " << harga[i] * porsi[i];
		}

		else if (pilih_g == 8) {
			cout << "Anda memesan Intel Goreng + Nasi " << porsi[i] << " porsi";
			harga[i] = 10000;
			cout << "\nTotal = Rp. " << harga[i] * porsi[i];
		}

		else if (pilih_g == 9) {
			cout << "Anda memesan Intel Rebus + Nasi " << porsi[i] << " porsi";
			harga[i] = 10000;
			cout << "\nTotal = Rp. " << harga[i] * porsi[i];
		}

		else if (pilih_g == 10) {
			cout << "Anda memesan Es Teh " << porsi[i] << " porsi";
			harga[i] = 3000;
			cout << "\nTotal = Rp. " << harga[i] * porsi[i];
		}

		else if (pilih_g == 11) {
			cout << "Anda memesan Es Jeruk " << porsi[i] << " porsi";
			harga[i] = 3000;
			cout << "\nTotal = Rp. " << harga[i] * porsi[i];
		}

		else if (pilih_g == 12) {
			cout << "Anda memesan Kopi Susu " << porsi[i] << " porsi";
			harga[i] = 4000;
			cout << "\nTotal = Rp. " << harga[i] * porsi[i];
		}

		else if (pilih_g == 13) {
			cout << "Anda memesan Air Putih " << porsi[i] << " porsi";
			harga[i] = 0;
			cout << "\nTotal = Rp. " << harga[i] * porsi[i];
		}

		else {
			cout << "Kode Salah !";
			break;
			menu_g();
		}
	}

	total_harga = 0;
	for (i = 1;i <= pilih_g;++i) {
		total = harga[i] * porsi[i];
		total_harga = total_harga + total;
	}
	
	cout << "\n==============================================================================\n";
	cout << "\nNama Pemesan        : " << nama_g;
	cout << "\nTotal Harga         : Rp. " << total_harga;
	cout << "\nBayar               : Rp. "; cin >> bayar;
	cout << "Kembalian           : Rp. " << bayar - total_harga << endl;
	cout << "\n================================ Terima Kasih ================================\n";

	Sleep(2000);
	login();
}