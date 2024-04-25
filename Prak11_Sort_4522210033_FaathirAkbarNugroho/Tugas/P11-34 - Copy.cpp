/* Faathir Akbar Nugroho
   4522210033
   Room 3 : Laila_Josua
   Soal 34
   Insertion Sort*/

#include <iostream>
using namespace std;

int main()
{
	int fa,at,hi,r,data[50];
	cout<<endl;
	cout<<"Masukkan banyak bilangan : ";cin>>hi;
	for(fa=1;fa<=hi;fa++)
	{
		cout<<"Data "<<fa<<" : ";cin>>data[fa];
	}
	for(fa=1;fa<=hi;fa++)
	{
		for(at=fa+1;at<=hi;at++)
		{
			if(data[fa]<data[at])
			{
				r=data[fa];
				data[fa]=data[at];
				data[at]=r;
			}
		}
	}
	cout<<endl;
	cout<<"Hasil pengurutan : ";
	for(fa=1;fa<=hi;fa++)
	{
		cout<<data[fa]<<" ";
	}
	cin.get();
}