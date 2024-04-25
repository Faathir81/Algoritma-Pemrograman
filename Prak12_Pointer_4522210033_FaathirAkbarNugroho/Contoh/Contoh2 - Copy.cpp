/*Faathir Akbar Nugroho
  4522210033
  Room 3 Laila_Josua
  Pointer*/
  
#include <iostream>
using namespace std;

int main()
{
	int fa,*at,**hir;
	fa=44;
	at=&fa;
	hir=&at;
	cout<<endl;
	cout<<"Isi variabel [fa-*at-**hir] = "<<fa<<"-"<<*at<<"-"<<**hir<<endl;
	cout<<"============================================================"<<endl;
	cout<<endl;
	cout<<"Alamat variabel [&fa-&at-&hir] = "<<&fa<<"-"<<&at<<"-"<<&hir<<endl;
	cout<<"============================================================"<<endl;
	cout<<endl;
	cout<<"Isi variabel dalam HEXA [fa-at-hir] = "<<fa<<"-"<<at<<"-"<<hir<<endl;
	cout<<"============================================================"<<endl;
	cout<<endl;
	cin.get();
}