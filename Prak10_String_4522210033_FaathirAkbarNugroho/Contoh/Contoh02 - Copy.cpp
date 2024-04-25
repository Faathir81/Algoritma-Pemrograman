/* Faathir Akbar Nugroho
   4522210033
   Room 3 : Laila_Josua
   String */

#include <iostream>
using namespace std;

int main()
{
	char Faathir[] = "Chandra Nursari";
	char Akbar[30];
	int i;
	
	cout<<"Menyalin string"<<endl;
	cout<<"==============="<<endl;
	for(i=0; Faathir[i]; i++)
		Akbar[i] = Faathir[i];
		Akbar[i] = '\0';
		cout<<"Tulisan Asli          : "<<Faathir<<endl;
		cout<<"Tulisan Hasil Salinan : "<<Akbar<<endl;
		cin.get();
}