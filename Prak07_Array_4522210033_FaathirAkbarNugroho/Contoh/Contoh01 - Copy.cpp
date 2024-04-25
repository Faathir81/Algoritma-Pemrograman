/* Faathir Akbar Nugroho
   4522210033
   Array 
   Room 3 : Laila_Josua */
   
#include <iostream>
using namespace std;

int main()
{
	const int Faathir=3;
	int Akbar[Faathir]={22,7,1966};
	int i, Nugroho=0;
	cout << endl;
	cout << "Menginput ARRAY/LARIK 1 Dimensi" << endl;
	cout << "===============================" << endl;
	for (i=0; i<Faathir; i++)
	{
		cout << "Isi Elemen Ke-" << i+1 << " : " << Akbar[i] << endl;
		Nugroho=Nugroho+Akbar[i];
	}
	cout << endl;
	cout << "===============================" << endl;
	cout << "Total Dari Penjumlahan = " << Nugroho << endl;
	cin.get();
}