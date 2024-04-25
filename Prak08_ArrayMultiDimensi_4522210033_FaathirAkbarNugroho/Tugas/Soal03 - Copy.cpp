/* Faathir Akbar Nugroho
   4522210033
   Array Multi Dimensi (Soal 03)
   Room 3 : Laila_Josua */
   
#include <iostream>
using namespace std;

int main()
{
	int Faathir[6][4];
	int Akbar, Nugroho;
	cout << endl;
	cout << "Menampilkan ARRAY/LARIK 2 Dimensi" << endl;
	cout << " Dengan Ordo 6x4 Melalui Inputan" << endl;
	cout << "=================================" << endl;
	cout << endl;
	cout << endl;
	for (Akbar=0; Akbar<6; Akbar++) 
	{
		for (Nugroho=0; Nugroho<4; Nugroho++) 
		{
			cout << "Masukkan angka pada baris ke " << Akbar+1 << " kolom ke " << Nugroho+1 << " : ";
			cin >> Faathir[Akbar][Nugroho]; 
		} 
	}
	cout << endl;
	cout << "Tampilan Isi Elemen" << endl;
	cout << "===================" << endl;
	cout << endl;
	for (Akbar=0; Akbar<6; Akbar++) 
	{
		for (Nugroho=0; Nugroho<4; Nugroho++)
			cout << Faathir[Akbar][Nugroho] << "	";
			cout << endl; 
	}
	cin.get();
}	
   