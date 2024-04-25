/*Contoh01
Faathir Akbar Nugroho
4522210033
WHILE & DO WHILE*/

#include <iostream>
using namespace std;

int main()
{
	int Faathir;
	Faathir = 1;
	cout << endl;
	cout << "===========================" << endl;
	cout << "Menampilkan Tulisan 2 Baris" << endl;
	cout << "===========================" << endl;
	cout << endl;
	while(Faathir <= 5)
	{
		cout << "Yang Ke = " << Faathir << endl;
		cout << "Selamat Datang" << endl;
		cout << "----MinGW---" << endl;
		cout << endl;
		Faathir++;
	}
	cin.get();
}