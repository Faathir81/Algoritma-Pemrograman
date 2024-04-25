/* Faathir Akbar Nugroho
   4522210033
   Soal Nomor 4
   Room 03 - Laila_Josua*/

#include <iostream>
using namespace std;

int main()
{
	int Total, Fa, At, Hi, Ra, Kb, Ar, Nu, Gr, Oh, Lembur;
	Fa = 3000; At = 3500; Hi = 4000; Ra = 4500 ; Lembur = 5000;
	cout << endl;
	cout << "Upah Karyawan PT XYZ" << endl;
	cout << "====================" << endl; 
	cout << "Masukkan Total Jam Kerja Karyawan = " ; cin >> Kb;
	if (Kb <= 36)
	{
		cout << "=====================================" << endl;
		cout << "GAJI TIDAK LEMBUR UNTUK TIAP GOLONGAN" << endl;
		cout << "=====================================" << endl;
		Ar = Kb*Fa;
		cout << "Jumlah Gaji Karyawan Golongan A Adalah = " << Ar << endl;
		Nu = Kb*At;
		cout << "Jumlah Gaji Karyawan Golongan B Adalah = " << Nu << endl;
		Gr = Kb*Hi;
		cout << "Jumlah Gaji Karyawan Golongan C Adalah = " << Gr << endl;
		Oh = Kb*Ra;
		cout << "Jumlah Gaji Karyawan Golongan D Adalah = " << Oh << endl;
	}
	else
		if (Kb >= 36)
		{
			cout << "================================" << endl;
			cout << "GAJI LEMBUR UNTUK SEMUA GOLONGAN" << endl;
			cout << "================================" << endl;
			Ar = (36*Fa)+((Kb-36)*Lembur);
			cout << "Jumlah Gaji Karyawan Golongan A Adalah = " << Ar << endl;
			Nu = (36*At)+((Kb-36)*Lembur);
			cout << "Jumlah Gaji Karyawan Golongan B Adalah = " << Nu << endl;
			Gr = (36*Hi)+((Kb-36)*Lembur);
			cout << "Jumlah Gaji Karyawan Golongan C Adalah = " << Gr << endl;
			Oh = (36*Ra)+((Kb-36)*Lembur);
			cout << "Jumlah Gaji Karyawan Golongan D Adalah = " << Oh << endl;
		}
cin.get();
}		