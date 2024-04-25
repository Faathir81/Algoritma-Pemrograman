/* Faathir Akbar Nugroho
   4522210033
   Array Multi Dimensi
   Room 3 : Laila_Josua */
   
#include <iostream>
using namespace std;

int main()
{
	int Faathir[3][4] = {{11,22,33,44},{63,11,66,7},{22,28,11,7}};
	int Akbar, Nugroho;
	cout << endl;
	cout << "Menampilkan ARRAY/LARIK 2 Dimensi" << endl;
	cout << "         Dengan Ordo 3x4" << endl;
	cout << "=================================" << endl;
	cout << endl;
	cout << endl;
	for (Akbar=0; Akbar<3; Akbar++)
	{
		for (Nugroho=0; Nugroho<4; Nugroho++)
			cout << Faathir[Akbar][Nugroho] << "    ";
		cout << endl;
	}
	cin.get();
}