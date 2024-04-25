/* Faathir Akbar Nugroho
   4522210033
   Room 3 Laila_Josua
   File
   Contoh 1   */
   
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream file_keluaran;
	file_keluaran.open("BIODTKU.TXT");
	cout<<"sedang merekam........................"<<endl;
	file_keluaran<<" Nama      : S.R. Candra Nursari"<<endl;
	file_keluaran<<" Alamat    : Jl. Ruby VII d7/7 Medan"<<endl;
	file_keluaran<<" NIDN      : 0322076603"<<endl;
	file_keluaran<<" JK        : Perempuan"<<endl;
	file_keluaran<<" Thn Masuk : 2002"<<endl;
	file_keluaran.close();
}