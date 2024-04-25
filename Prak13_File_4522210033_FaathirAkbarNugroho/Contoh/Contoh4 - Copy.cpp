/* Faathir Akbar Nugroho
   4522210033
   Room 3 Laila_Josua
   File
   Contoh 4   */
   
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int bilangan;
	ifstream file_masukan("Angka.DAT", ios::binary);
	cout<<"Menampilkan isi file Angka.DAT"<<endl;
	cout<<"=============================="<<endl;
	file_masukan.read((char*)&bilangan,sizeof(int));
	while(file_masukan)
	{
		cout<<bilangan<<endl;
		file_masukan.read((char*)&bilangan,sizeof(int));
	}
	file_masukan.close();
}