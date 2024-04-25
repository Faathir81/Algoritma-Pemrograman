/* Faathir Akbar Nugroho
   4522210033
   Room 3 : Laila_Josua
   Insertion Sort */
   
#include <iostream>
#include <string.h>
#define n 9
using namespace std;

int main()
{
	int fa,at,hir;
	int A[n]={23,17,14,6,13,10,1,5,7};
	cout<<endl;
	cout<<"Sebelum dilakukan pengurutan"<<endl;
	cout<<"============================"<<endl;
	for(fa=0;fa<=n-1;fa++)
		cout<<A[fa]<<" ";
		cout<<endl;
		for(at=0;at<=n-1;at++)
		{
			fa=at;
			hir=A[fa];
			while(fa>=0&&A[fa-1]>hir)
			{
				A[fa]=A[fa-1];
				fa--;
			}
			A[fa]=hir;
		}
		cout<<endl;
		cout<<"Sesudah dilakukan pengurutan"<<endl;
		cout<<"============================"<<endl;
		for(fa=0;fa<=n-1;fa++)
			cout<<A[fa]<<" ";
			cout<<endl;
			cout<<endl;
			cin.get();
}