/*	Faathir Akbar Nugroho
	4522210033
	03_Laila_Josua	
	Contoh 2	*/
	
#include <iostream>
using namespace std;

int main()
{	
	int Faathir, Akbar, Nugroho;
	cout << endl;
	cout << "=======================================" << endl;
	cout << "Menampilkan Pengulangan 4X(k) dan 6X(i)" << endl;
	cout << "=======================================" << endl;
	cout << endl;
	Nugroho = 0;
	for (Faathir = 1; Faathir <= 4; Faathir++)
		for (Akbar = Faathir; Akbar <= 6; Akbar++)
			Nugroho = Nugroho+5;
		cout << "Nilai Akhir dari N adalah " << Nugroho << endl;

cin.get();
}