/* Menampilkan Bilangan ---IF01
	Nama 	: Faathir AKbar Nugroho
	NPM 	: 4522210033
	Materi 	: IF
	Date	: 3 Oktober 2022*/
	
#include <iostream>
using namespace std;

int main()
{
	//Deklarasi Variabel
	int Faathir, Akbar;
	
	//Deskripsi
	cout << "Masukkan Nilai Bilangan Pembagi (Faathir) 	=   "; cin >> Faathir;
	cout << "Masukkan Nilai Bilangan Pembagi (Akbar) 	=   "; cin >> Akbar;
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	
	if (Faathir % Akbar == 0)
		cout<< "Jawabannya adalah BENAR" << endl;
	cin.get();
}