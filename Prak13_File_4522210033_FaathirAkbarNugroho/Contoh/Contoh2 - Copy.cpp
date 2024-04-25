/* Faathir Akbar Nugroho
   4522210033
   Room 3 Laila_Josua
   File
   Contoh 2   */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int MAKS=80;
	char penyangga[MAKS+1];
	ifstream file_masukan("BIODTKU.TXT");
	while(file_masukan)
	{
		file_masukan.getline(penyangga,MAKS);
		cout<<penyangga<<endl;
	}
	file_masukan.close();
}