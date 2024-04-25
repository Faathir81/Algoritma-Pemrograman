/* Faathir Akbar Nugroho
   4522210033
   Array Multi Dimensi
   Room 3 : Laila_Josua */
   
#include <iostream>
using namespace std;

int main()
{
	int Faathir [4] [4];
	int Akbar,Nugroho;
	cout << endl;
	cout << "Menampilkan ARRAY/LARIK 2 Dimensi" << endl;
	cout << " Dengan Ordo 4X4 Melalui Inputan" << endl;
	cout << "=================================" << endl;
	cout << endl;
	cout << endl;
	for (Akbar=0; Akbar<4; Akbar++) {
		for (Nugroho=0; Nugroho<4; Nugroho++) {
			cout << "Masukkan Isi Elemen [" << Akbar+1 << "][" << Nugroho+1 << "] : ";
			cin >> Faathir[Akbar][Nugroho]; } } 
			cout << endl;
			cout << "Tampilkan Isi Elemen" <<endl;
			cout << "====================" <<endl;
			cout << endl;
for (Akbar=0; Akbar<4; Akbar++)	{
	for (Nugroho=0; Nugroho<4; Nugroho++)
		cout << Faathir [Akbar][Nugroho] << "	";
	cout << endl; }
	cin.get();
}