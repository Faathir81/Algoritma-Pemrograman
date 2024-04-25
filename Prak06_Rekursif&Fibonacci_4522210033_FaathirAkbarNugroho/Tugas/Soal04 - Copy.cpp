/* Menampilkan Rekursif Faktorial-proses iterasi
Nama : Faathir Akbar Nugroho
NIM : 4522210033
Materi : Rekursif (pengulangan)
Date : 11 November 2022*/

#include <iostream>
using namespace std;

int main ()
{
	long int Nugroho, Akbar, Faathir=1;
	cout << endl;
	cout << "Menampilkan Rekursif - FAKTORIAL" << endl;
	cout << "================================" << endl;
	cout << "Masukkan Sebuah Bilangan = " ; cin >> Nugroho;
	cout << endl;
	cout << "================================" << endl;
		for (Akbar = 1; Akbar <= Nugroho; Akbar++)
		{
			Faathir = Faathir * Akbar;
			cout << "Faktorial dari " << Akbar << "! adalah = " << Faathir << endl;			
		}
	cin.get();
}