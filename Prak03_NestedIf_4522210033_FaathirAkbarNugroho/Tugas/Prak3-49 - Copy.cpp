/* Faathir Akbar Nugroho
   4522210033
   Soal Nomor 49
   Room 03 - Laila_Josua*/

#include <iostream>
using namespace std;

int main()
{
	char Faathir;
	int Akbar, Nugr, Oho;
	cout << endl;
	cout << "=============================" << endl;
	cout << "KILANG ANGGUR DILUC RAGNVINDR" << endl;
	cout << "=============================" << endl;
	cout << endl;
	cout << "MENU" << endl;
	cout << "A. Jenis Belanja Tipe A" << endl;
	cout << "B. Jenis Belanja Tipe B" << endl;
	cout << "C. Jenis Belanja Tipe C" << endl;
	cout << "D. Keluar Program " << endl;
	cout << endl;
	cout << "Pilih [A/B/C/D] = "; cin >> Faathir;
	cout << endl;
	switch (Faathir)
	{
		case 'A':
		cout << endl;
		cout << "====================" << endl;
		cout << "Jenis Belanja Tipe A" << endl;
		cout << "====================" << endl;
		cout << endl;
		cout << "1. Jumlah Diskon" << endl;
		cout << "2. Jumlah Total Bayar" << endl;
		cout << "3. Jumlah Diskon dan Total Bayar" << endl;
		cout << endl;
		cout << "Pilih [1/2/3] : " ; cin >> Nugr;
		switch (Nugr)
		{
			case 1:
			cout << endl;
			cout << "=====================================" << endl;
			cout << "          1. Jumlah Diskon           " << endl;
			cout << "=====================================" << endl;
			cout << endl;
			cout << "====================================" << endl;
			cout << "Jenis barang A mendapat diskon = 10%" << endl;
			cout << "====================================" << endl; break;
			case 2: 
			cout << endl;
			cout << "=====================================" << endl;
			cout << "        2. Jumlah Total Bayar        " << endl;
			cout << "=====================================" << endl;
			cout << endl;
			cout << "Masukkan Harga = "; cin >> Akbar;
			Oho = (Akbar)-(0.1*Akbar);
			cout << endl;
			cout << "===============================================" << endl;
			cout << "Jumlah total biaya yang harus anda bayar adalah = " << Oho << endl; 
			cout << "===============================================" << endl; break;
			case 3:
			cout << endl;
			cout << "=====================================" << endl;
			cout << "   3. Jumlah Diskon dan Total Bayar  " << endl;
			cout << "=====================================" << endl;
			cout << endl;
			cout << "Masukkan Harga = "; cin >> Akbar;
			Oho = (Akbar)-(0.1*Akbar);
			cout << endl;
			cout << "============================================================" << endl;
			cout << "Jenis barang A mendapat diskon = 10%, Harga setelah didiskon = " << Oho << endl;
			cout << "============================================================" << endl; break;
			default : cout << " " << endl;
		}
		break;
		case 'B':
		cout << endl;
		cout << "====================" << endl;
		cout << "Jenis Belanja Tipe B" << endl;
		cout << "====================" << endl;
		cout << endl;
		cout << "1. Jumlah Diskon" << endl;
		cout << "2. Jumlah Total Bayar" << endl;
		cout << "3. Jumlah Diskon dan Total Bayar" << endl;
		cout << endl;
		cout << "Pilih [1/2/3] : " ; cin >> Nugr;
		switch (Nugr)
		{
			case 1:
			cout << endl;
			cout << "=====================================" << endl;
			cout << "          1. Jumlah Diskon           " << endl;
			cout << "=====================================" << endl;
			cout << endl;
			cout << "====================================" << endl;
			cout << "Jenis barang B mendapat diskon = 15%" << endl;
			cout << "====================================" << endl; break;
			case 2: 
			cout << endl;
			cout << "=====================================" << endl;
			cout << "        2. Jumlah Total Bayar        " << endl;
			cout << "=====================================" << endl;
			cout << endl;
			cout << "Masukkan Harga = "; cin >> Akbar;
			Oho = (Akbar)-(0.15*Akbar);
			cout << endl;
			cout << "===============================================" << endl;
			cout << "Jumlah total biaya yang harus anda bayar adalah = " << Oho << endl; 
			cout << "===============================================" << endl; break;
			case 3:
			cout << endl;
			cout << "=====================================" << endl;
			cout << "   3. Jumlah Diskon dan Total Bayar  " << endl;
			cout << "=====================================" << endl;
			cout << endl;
			cout << "Masukkan Harga = "; cin >> Akbar;
			Oho = (Akbar)-(0.15*Akbar);
			cout << endl;
			cout << "============================================================" << endl;
			cout << "Jenis barang B mendapat diskon = 15%, Harga setelah didiskon = " << Oho << endl;
			cout << "============================================================" << endl; break;
			default : cout << " " << endl;
		}
		break;
		case 'C':
		cout << endl;
		cout << "====================" << endl;
		cout << "Jenis Belanja Tipe C" << endl;
		cout << "====================" << endl;
		cout << endl;
		cout << "1. Jumlah Diskon" << endl;
		cout << "2. Jumlah Total Bayar" << endl;
		cout << "3. Jumlah Diskon dan Total Bayar" << endl;
		cout << endl;
		cout << "Pilih [1/2/3] : " ; cin >> Nugr;
		switch (Nugr)
		{
			case 1:
			cout << endl;
			cout << "=====================================" << endl;
			cout << "          1. Jumlah Diskon           " << endl;
			cout << "=====================================" << endl;
			cout << endl;
			cout << "====================================" << endl;
			cout << "Jenis barang C mendapat diskon = 20%" << endl;
			cout << "====================================" << endl; break;
			case 2: 
			cout << endl;
			cout << "=====================================" << endl;
			cout << "        2. Jumlah Total Bayar        " << endl;
			cout << "=====================================" << endl;
			cout << endl;
			cout << "Masukkan Harga = "; cin >> Akbar;
			Oho = (Akbar)-(0.2*Akbar);
			cout << endl;
			cout << "===============================================" << endl;
			cout << "Jumlah total biaya yang harus anda bayar adalah = " << Oho << endl; 
			cout << "===============================================" << endl; break;
			case 3:
			cout << endl;
			cout << "=====================================" << endl;
			cout << "   3. Jumlah Diskon dan Total Bayar  " << endl;
			cout << "=====================================" << endl;
			cout << endl;
			cout << "Masukkan Harga = "; cin >> Akbar;
			Oho = (Akbar)-(0.2*Akbar);
			cout << endl;
			cout << "============================================================" << endl;
			cout << "Jenis barang C mendapat diskon = 20%, Harga setelah didiskon = " << Oho << endl;
			cout << "============================================================" << endl; break;
			default : cout << " " << endl;
		}
		break;
		case 'D':
		cout << "==============" << endl;
		cout << "Keluar Program" << endl; 
		cout << "==============" << endl; break;
		default :
		cout << "=====================" << endl;
		cout << "Diskon tidak dihitung" << endl;
		cout << "=====================" << endl;
	}
	cin.get();
}	