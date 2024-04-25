/*	Faathir Akbar Nugroho
	4522210033
	03_Laila_Josua	
	Soal nomor 14	*/
	
#include <iostream>
using namespace std;

int main()
{	
	int fa, at, hi, ra;
	cout << endl;
	cout << "======================" << endl;
	cout << "Perhitungan Nested for" << endl;
	cout << "======================" << endl;
	cout << endl;
	ra = 1;
	for (fa = 1; fa <= 2; fa++)
		for (at = fa; at <= 4; at++)
			for (hi = at; hi <= 6; hi++)
			{
			ra = ra+2-1;
			cout << "indeks i = " << fa << " indeks j = " << at << " indeks k = " << hi << " Dengan Nilai = " << ra << endl;
			}


cin.get();
}