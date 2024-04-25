/* Faathir Akbar Nugroho
   4522210033
   Contoh 2
   Room 03 - Laila_Josua*/
   
#include <iostream>
using namespace std;

int main()
{
	char Faathir;
	cout << endl;
	cout << "		Menampilkan Angka A s.d. G" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << "Masukkan Angka [A/B/C/D/E/F/G] = " ; cin >> Faathir;
	cout << endl;
	switch (Faathir)
	{
		case 'A': cout << "SATU" << endl; break;
		case 'B': cout << "DUA" << endl; break;
		case 'C': cout << "TIGA" << endl; break;
		case 'D': cout << "EMPAT" << endl; break;
		case 'E': cout << "LIMA" << endl; break;
		case 'F': cout << "ENAM" << endl; break;
		case 'G': cout << "TUJUH" << endl; break;
		default : cout << "Angka Tidak Valid" << endl; break;
	}
cin.get();
}