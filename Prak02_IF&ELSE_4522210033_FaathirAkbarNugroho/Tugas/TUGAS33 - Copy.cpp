//BELANJA

#include <iostream>
using namespace std;

int main()
{
	int Faathir, Akbar, Nugroho;
	Faathir = 5000;
	
	cout << "	KILANG ANGGUR DILUC RAGNVINDR	" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << "Masukkan Jumlah Barang Yang Dibeli = "; cin >> Akbar;
	cout << endl;
	Nugroho = (Akbar * Faathir);
	if (Nugroho <= 100000)
		cout << "Tidak Mendapatkan Diskon"<< endl;
	else 
		cout << "Mendapatkan Diskon"<< endl;
	cin.get();
}