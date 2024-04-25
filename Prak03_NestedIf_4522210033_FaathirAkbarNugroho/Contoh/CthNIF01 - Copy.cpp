/* Faathir Akbar Nugroho
   4522210033
   Contoh 1
   Room 03 - Laila_Josua*/

#include <iostream>
using namespace std;

int main()
{
	int Faathir;
	cout << endl;
	cout << "        Menampilkan Nilai Yang Disukai" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << "Masukkan Nilai Yang Anda Sukai [1-7] = " ; cin >> Faathir;
	if (Faathir == 1)
		cout << "SATU" << endl;
	else
		if (Faathir == 2)
			cout << "DUA" << endl;
		else
			if (Faathir == 3)
				cout << "TIGA" << endl;
			else
				if (Faathir == 4)
					cout << "EMPAT" << endl;
				else 
					if(Faathir == 5)
						cout << "LIMA" << endl;
					else
						if(Faathir == 6)
							cout << "ENAM" << endl;
						else 
							if (Faathir == 7)
								cout << "TUJUH" << endl;
							else
								cout << "Angka Tidak VALID" << endl;
cin.get();
}
	