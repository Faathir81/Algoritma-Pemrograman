//Hitung Akar dan Pangkat Suatu Bilangan
	#include <iostream>
	#include <cmath>
	#include <stdlib.h>
	using namespace std;
	
	int main ()
	{
	int Faathir, Akbar, Nugroho;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"Menghitung Faathir pangkat Akbar"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\nFaathir : ";cin>>Faathir;
	cout<<"\nAkbar : ";cin>>Akbar;
	cout<<"\nFaathir pangkat Akbar : "<<pow(Faathir, Akbar);
	cout<< endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"Menghitung akar dari Nugroho: ";cin>>Nugroho;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"\nHasilnya adalah : "<<sqrt(Nugroho);
	cout<< endl;
	cin.get();
	cin.get();
	}