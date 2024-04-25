/*Contoh02
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
	cout << "MENAMPILKAN TULISAN 2 BARIS" << endl;
	cout << "===========================" << endl;
	cout << endl;
	do
	{
		cout << "Yang Ke = " << Faathir << endl;
		cout << "Selamat Datang" << endl;
		cout << "----MinGW----" << endl;
		cout << endl;
		Faathir++;
	}
	while(Faathir <= 5);
	cin.get();
}