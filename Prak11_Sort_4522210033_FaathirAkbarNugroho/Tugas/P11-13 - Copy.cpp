/* Faathir Akbar Nugroho
   4522210033
   Room 3 : Laila_Josua
   Soal 13
   Selection Sort*/
   
#include <iostream>
#define n 9
using namespace std;

int fa,at,hi,r;

void Tampil1()
{
	int A[n]={11,78,85,26,31,14,84,92,100};
	cout<<endl;
	cout<<"Sebelum dilakukan pengurutan"<<endl;
	cout<<"============================"<<endl;
	for(fa=0;fa<=n-1;fa++)
		cout<<A[fa]<<" ";
		cout<<endl;
		cout<<endl;
}

void Tampil2()
{
	int A[n];
	cout<<endl;
	cout<<"Step by step dilakukan pengurutan"<<endl;
	cout<<"================================="<<endl;
	hi=0;
	while(hi<=n-2)
	{
		at=hi;
		fa=hi+1;
		while(fa<=n-1)
		{
			if(A[fa]<A[at])
				at=fa;
				cout<<A[fa]<<" ";
				fa++;
		}
		cout<<endl;
		r=A[at];
		A[at]=A[hi];
		A[hi]=r;
		hi++;
	}
	cout<<endl;
}

void Tampil3()
{
	int A[n];
	cout<<endl;
	cout<<"Sesudah dilakukan pengurutan"<<endl;
	cout<<"============================"<<endl;
	for(fa=0;fa<=n-1;fa++)
		cout<<A[fa]<<" ";
}

int main()
{
	Tampil1();
	Tampil2();
	Tampil3();
	cout<<endl;
	cin.get();
}