/* Faathir Akbar Nugroho
   4522210033
   Array (Soal 03)
   Room 3 : Laila_Josua */
   
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	const int Faathir=10;
	int Akbar[Faathir]={1, 4, 9, 16, 25, 36, 49, 64, 81, 100};
	int Nugroho, Total=0;
	cout << endl;
	cout << "Menginput ARRAY/LARIK 1 Dimensi" << endl;
	cout << "===============================" << endl;
	for (Nugroho=0; Nugroho<Faathir; Nugroho++)
	{
		cout << "Hasil Pangkat dari " << Akbar[Nugroho] << " adalah " << Total+1 << endl;
		Total=sqrt(Akbar[Nugroho]);
	}
	cin.get();
}