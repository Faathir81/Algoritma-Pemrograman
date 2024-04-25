/* Faathir Akbar Nugroho
   4522210033
   Room 3 : Laila_Josua
   String */
   
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char Faathir[] = "Apa yanf dimaksud dengan quantum?";
	cout<<endl;
	cout<<"==================================================="<<endl;
	cout<<"Tulisannya adalah "<<Faathir<<endl;
	cout<<"==================================================="<<endl;
	cout<<endl;
	cout<<"Berikut ini merupakan hasil akhir dari enkripsi pesan..."<<endl;
	Faathir[7] = 'g';
	strupr(Faathir);
	cout<<"Menjadi : "<<Faathir<<endl;
	cin.get();
}