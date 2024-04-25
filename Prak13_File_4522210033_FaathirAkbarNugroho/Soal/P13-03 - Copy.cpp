/* Faathir Akbar Nugroho
   4522210033
   Room 3 Laila_Josua
   File
   Soal 2   */
   
#include <iostream>
#include<conio.h>
#include<fstream>
using namespace std;

void main1()
{
	ofstream file_keluaran;
	file_keluaran.open("NILAI1.TXT");
	cout<<"sedang merekam........................"<<endl;
	cout<<endl;
	file_keluaran<<" Nilai A  : 85 - 100"<<endl;
	file_keluaran<<" Nilai A- : 80 - 85"<<endl;
	file_keluaran<<" Nilai B+ : 76 - 80"<<endl;
	file_keluaran<<" Nilai B  : 72 - 76"<<endl;
	file_keluaran<<" Nilai B- : 68 - 72"<<endl;
	file_keluaran<<" Nilai C+ : 64 - 68"<<endl;
	file_keluaran<<" Nilai C  : 56 - 64"<<endl;
	file_keluaran<<" Nilai D  : 45 - 56"<<endl;
	file_keluaran<<" Nilai E  : 30 - 45"<<endl;
	file_keluaran<<" Nilai F  : 0 - 30"<<endl;
	file_keluaran.close();
}

void main2()
{
	const int faathir=80;
	char akbar[faathir+1];
	ifstream file_masukan("NILAI1.TXT");
	while(file_masukan)
	{
		file_masukan.getline(akbar,faathir);
		cout<<akbar<<endl;
	}
	
	file_masukan.close();
}

int main()
{
	main1();
	main2();
	cin.get();
}