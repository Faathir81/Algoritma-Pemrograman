/*Faathir Akbar Nugroho
  4522210033
  Room 3 Laila_Josua
  Pointer*/
  
#include <iostream>
using namespace std;

int main()
{
	int fa=44;
	int *at=&fa;
	cout<<endl;
	cout<<"Alamat Address [at] = "<<at<<endl;
	cout<<"=============================="<<endl;
	cout<<endl;
	int hir=*at;
	cout<<"Isi variabel hir = "<<hir<<endl;
	cout<<endl;
	cin.get();
}