/* Faathir Akbar Nugroho
   4522210033
   Soal Nomor 34
   Room 03 - Laila_Josua*/

#include <iostream>
using namespace std;

int main()
{
	char Faathir;
	cout << endl;
	cout << "=================" << endl;
	cout << "Menampilkan Nilai" << endl;
	cout << "=================" << endl;
	cout << "Masukkan Nilai [A/B/C/D/E] : " ; cin >> Faathir;
	switch (Faathir)
	{
		case 'A' :
			cout << "SANGAT BAIK" << endl; break;
		case 'B' :
			cout << "BAIK" << endl; break;
		case 'C' :
			cout << "CUKUP" << endl; break;
		case 'D' :
			cout << "KURANG" << endl; break;
		case 'E' :
			cout << "GAGAL" << endl; break;
		default : cout << "HURUF TAK DIKENAL" << endl; break;
	}
	cin.get ();
}