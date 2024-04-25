/* Menampilkan Bilangan ---IF02
	Nama	: Faathir Akbar Nugroho
	NPM		: 4522210033
	Materi	: IF
	Date	: 3 Oktober 2022 */
	
#include <iostream>
using namespace std;

int main()
{
	//Deklarasi Variabel
	int Faathir, Akbar;
	
	//Deskripsi
	cout << "Masukkan Nilai Bilangan Pembagi (Faathir) 	= "; cin >> Faathir;
	cout << "Masukkan NIlai Bilangan Pembagi (Akbar) 	= "; cin >> Akbar;
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	
	if (Faathir % Akbar == 0)
		cout << "Jawabannya adalah BENAR" << endl;
	else
		cout << "Jawabannya adalah SALAH" << endl;
		cout << endl;
	cin.get();
}