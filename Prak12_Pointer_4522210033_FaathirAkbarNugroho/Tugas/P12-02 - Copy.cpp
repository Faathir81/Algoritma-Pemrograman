/*Faathir Akbar Nugroho
  4522210033
  Room 3 Laila_Josua
  Soal 2
  Pointer*/

#include <iostream>
using namespace std;

void main1()
{
	int Fa, *At;
	At=&Fa;
	cout<<endl;
	cout<<"Masukkan Bulan [1..12] = ";cin>>Fa;
	cout<<"==========================="<<endl;
}

void main2()
{
	int *At;
	if(*At==1)
		cout<<"Januari"<<endl;
	else
		if(*At==2)
			cout<<"Februari"<<endl;
		else
			if(*At==3)
				cout<<"Maret"<<endl;
			else
				if(*At==4)
					cout<<"April"<<endl;
				else
					if(*At==5)
						cout<<"Mei"<<endl;
					else
						if(*At==6)
							cout<<"Juni"<<endl;
						else
							if(*At==7)
								cout<<"Juli"<<endl;
							else
								if(*At==8)
									cout<<"Agustus"<<endl;
								else
									if(*At==9)
										cout<<"September"<<endl;
									else
										if(*At==10)
											cout<<"Oktober"<<endl;
										else
											if(*At==11)
												cout<<"November"<<endl;
											else
												if(*At==12)
													cout<<"Desember"<<endl;
												else
													cout<<"Angka Tidak VALID"<<endl;
}

int main()
{
	main1();
	main2();
	cin.get();
}