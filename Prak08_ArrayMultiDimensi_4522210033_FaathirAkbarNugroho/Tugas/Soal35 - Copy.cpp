/* Faathir Akbar Nugroho
   4522210033
   Array Multi Dimensi
   Room 3 : Laila_Josua */
   
#include <iostream>
using namespace std;
int A[10][10], B[10][10], C[10][10];
int Faathir, Akbar, Faathir2, Akbar2;

int main ()
{
	int Faathir3,Akbar3,Nugroho;
	cout << "   Menampilkan Array/larik multi dimensi" << endl;
	cout << "Menampilkan Besar Baris dan Kolom Matriks A" << endl;
	cout << "===========================================" << endl;
	cout << "Masukkan Jumlah Baris Matriks A = "; cin >> Faathir;
	cout << "Masukkan Jumlah Kolom Matriks A = "; cin >> Faathir2;
	cout << "===========================================" << endl;
	cout << "Masukkan Jumlah Baris Matriks B = "; cin >> Akbar;
	cout << "Masukkan Jumlah Kolom Matriks B = "; cin >> Akbar2;
	cout << "===========================================" << endl;
	cout << endl;
	cout << "Menginput Isi Elemen Array Matriks A" << endl;
	for (Faathir3=0; Faathir3<Faathir; Faathir3++)			{
		for (Akbar3=0; Akbar3<Faathir2; Akbar3++)	{
			cout << "Masukkan Isi Elemen ["<<Faathir3+1<<"]["<<Akbar3+1<<"] : ";
			cin >> A[Faathir3][Akbar3];		}	}
	cout << endl;
	cout << "Menginput isi elemen array matriks b" << endl;
	for (Faathir3=0; Faathir3<Akbar; Faathir3++)			{
		for (Akbar3=0; Akbar3<Akbar2; Akbar3++)	{
			cout << "Masukkan Isi Elemen{"<<Faathir3+1<<"}{"<<Akbar3+1<<"} : ";
			cin >> B[Faathir3][Akbar3];	}	}
	cout << endl;
	cout << endl;
	cout << "Tampilan Isi Elemen Array Matriks A" << endl;
	cout << "==========================================" << endl;
	cout << endl;
	for (Faathir3=0; Faathir3<Faathir; Faathir3++)			{
		for (Akbar3=0; Akbar3<Faathir2; Akbar3++)
			cout << A[Faathir3][Akbar3] << "    ";
			cout << endl;			}
	cout << endl;
	cout << endl;
	cout << "Tampilan Isi Elemen Array Matriks B" << endl;
	cout << "==========================================" << endl;
	cout << endl;
	for (Faathir3=0; Faathir3<Akbar; Faathir3++)		{
		for (Akbar3=0; Akbar3<Akbar2; Akbar3++)
			cout << B[Faathir3][Akbar3] << "    ";
			cout << endl;			}
	//Perkalian Matriks
	for (Faathir3=0; Faathir3<Faathir; Faathir3++)
		for (Akbar3=0; Akbar3<Faathir2; Akbar3++)
			for (Nugroho=0; Nugroho<Faathir2; Nugroho++)
			{
				C[Faathir3][Akbar3] = C[Faathir3][Akbar3] + A[Faathir3][Nugroho] * B[Nugroho][Akbar3];
			}
	cout << endl;
	cout << endl;
	cout << "Tampilan Hasil Kali Dua Matriks " << endl;
	cout << "==========================================" << endl;
	for (Faathir3=0; Faathir3<Faathir; Faathir3++)
	{
		for (Akbar3=0; Akbar3<Akbar2; Akbar3++)
		{
			cout << C[Faathir3][Akbar3] << "     ";
		}
		cout << endl;
	}
	cin.get();
}
