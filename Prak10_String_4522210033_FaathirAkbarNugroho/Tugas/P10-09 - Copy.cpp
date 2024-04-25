/* Faathir Akbar Nugroho
   4522210033
   Room 3 : Laila_Josua
   String */

#include <iostream>
using namespace std;

int main()
{
	char Faathir[70];
	int Akbar, i;
	cout<<endl;
	cout<<"Menghitung panjang string"<<endl;
	cout<<"========================="<<endl;
	cout<<"Masukkan string = ";cin.getline(Faathir, sizeof(Faathir));
	Akbar=0;
	for(i=0; Faathir[i]; i++)
	Akbar++;
		cout<<"Panjang String : "<<Akbar<<endl;
		cin.get();
}