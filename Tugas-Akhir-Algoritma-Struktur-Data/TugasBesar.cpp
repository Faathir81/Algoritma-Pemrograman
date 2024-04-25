/*               TUGAS BESAR
            ALGORITMA & PEMOGRAMAN
	NAMA			: Faathir Akbar Nugroho
	NPM				: 4522210033
	KELAS 			: A
	MATERI/SOAL 	: SI PENJUAL OBAT DI APOTEK(TIDAK ADA INPUTAN)
					  SELECTION/SELEKSI
					  REPATATION/PENGULANGAN
					  ARRAY
					  FUNCTION
					  STRING
					  INSERTION SORT - DESCENDING
*/
#include<string.h>
#include<iostream>
using namespace std;

//variabel global
string obat[]={"JAMKHO 100 ML","OPTIMAX FOR G TABLET","NUTRAFOR CHOI KAPSUL","DIABEMED KAPSUL","IMBOOST FORCE TABLET","NEUROBION FC TABLET"};
char Promo[]=" Anda mendapatkan diskon";
char PotonganHarga[]=" 25%!";
long harga[]={115566,71973,29280,48150,45000,22682};
int data[]={8,12,17,26,22,31};
int jumlah=4,jumlah1,jumlah2;
char pilih='N';

//function
//insertion sort - descending
void insertion(int data[])
{
	int temp,j;
	for(int i=1;i<6;i++)
	{
		temp=data[i];
		j=i-1;
		while(data[j]<temp&&j>=0)
		{
			data[j+1]=data[j];
			j--;
		}
		data[j+1]=temp;
	}
}

int main()
{
	int kode=1;
	cout<<"++===================================================================++"<<endl;
	cout<<"||                       SUMERU ACADEMIA PHARMACY                    ||"<<endl;
	cout<<"||                         Sumeru city, Teyvat                       ||"<<endl;
	cout<<"||                        No.Telp (1234)5678912                      ||"<<endl;
	cout<<"++===================================================================++"<<endl;
	cout << endl;
	cout << endl;
	cout << "==================" << endl;
	cout << " LOKET PEMBAYARAN" << endl;
	cout << "==================" << endl;
	cout << endl;
	cout << endl;
	cout<<"+----++----------------------------------------++------------++"<<endl;
	cout<<"|Kode||                 Nama Obat              ||    Harga   ||"<<endl;
	cout<<"+----++----------------------------------------++------------||"<<endl;
	cout<<"| 0. || JAMKHO 100 ML                          ||   115566   ||"<<endl;
	cout<<"| 1. || OPTIMAX FOR G TABLET                   ||    71973   ||"<<endl;
	cout<<"| 2. || NUTRAFOR CHOI KAPSUL                   ||    29280   ||"<<endl;
	cout<<"| 3. || DIABEMED KAPSUL                        ||    48150   ||"<<endl;
	cout<<"| 4. || IMBOOST FORCE TABLET                   ||    45000   ||"<<endl;
	cout<<"| 5. || NEUROBION FC TABLET                    ||    22682   ||"<<endl;
	cout<<"+----++----------------------------------------++------------++"<<endl;
	cout<<"======================================================================="<<endl;
	cout<<"    Pembayaran diatas Rp.200000 akan mendapatkan diskon sebesar 25%!" << endl;
	cout<<"======================================================================="<<endl;
	cout<<endl;
	MenuAwal:
	cout<<"Masukkan Kode Obat = "<<kode<<endl;
	//selection
	if(kode<=5)
	{
		cout<<"Masukkan jumlah yang diinginkan = "<<jumlah<<endl;
		cout<<"Nama obat          : "<<obat[kode]<<endl;
		cout<<"Harga obat         : "<<harga[kode]<<endl;
		jumlah1=harga[kode]*jumlah;
		cout<<"Total harga        : "<<jumlah1<<endl;
		cout<<"======================================================================="<<endl;
		cout<<"                          DAFTAR OBAT YANG DIBELI                      "<<endl;
		cout<<"======================================================================="<<endl;
		cout<<endl;
		//repetition
		for(int i=1;i<=jumlah;i++)
		{
			//array 
			cout<<"\t"<<i<<". "<<obat[kode]<<"\t Rp. "<<harga[kode]<<endl;
		}
		cout<<endl;
		if(jumlah1>200000)
		{
			jumlah2=jumlah1-(jumlah1*25/100);
			cout<<"-----------------------------------------------------------------------"<<endl;
			//string
			strcat(Promo, PotonganHarga);
			cout<<Promo<<endl;
			cout<<" =>TOTAL HARGA OBAT : Rp. "<<jumlah2<<endl;
			cout<<"-----------------------------------------------------------------------"<<endl;
			cout<<endl;
		}
		else
		{
			cout<<"-----------------------------------------------------------------------"<<endl;
			cout<<" =>TOTAL HARGA OBAT : Rp. "<<jumlah1<<endl;
			cout<<"-----------------------------------------------------------------------"<<endl;
		}
	}
	else
	{
		cout<<"---------------------------------------"<<endl;
		cout<<"Maaf, barang yang anda maksud tidak ada"<<endl;
		cout<<"---------------------------------------"<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<"======================================================================="<<endl;
	cout<<"                  Mengurutkan Penjualan Obat Minggu ini"<<endl;
	cout<<"======================================================================="<<endl;
	cout<<endl;
	cout<<"+----++----------------------------------------++------------++"<<endl;
	cout<<"|Kode||                 Nama Obat              || Penjualan  ||"<<endl;
	cout<<"+----++----------------------------------------++------------||"<<endl;
	cout<<"| 0. || JAMKHO 100 ML                          ||      8     ||"<<endl;
	cout<<"| 1. || OPTIMAX FOR G TABLET                   ||     12     ||"<<endl;
	cout<<"| 2. || NUTRAFOR CHOI KAPSUL                   ||     17     ||"<<endl;
	cout<<"| 3. || DIABEMED KAPSUL                        ||     26     ||"<<endl;
	cout<<"| 4. || IMBOOST FORCE TABLET                   ||     22     ||"<<endl;
	cout<<"| 5. || NEUROBION FC TABLET                    ||     31     ||"<<endl;
	cout<<"+----++----------------------------------------++------------++"<<endl;
	cout<<endl;
	cout<<"======================================================================="<<endl;
	cout<<"                         DATA SEBELUM DIURUTKAN"<<endl;
	cout<<"======================================================================="<<endl;
	cout<<"        0.      1.      2.      3.      4.      5. ===> KODE OBAT "<<endl;
	for(int ha=0;ha<6;ha++)
		cout<<"	"<<data[ha];
	cout<<endl;
	cout<<"======================================================================="<<endl;
	cout<<"                         DATA SETELAH DIURUTKAN"<<endl;
	cout<<"======================================================================="<<endl;
	insertion(data);
	cout<<"        5.      3.      4.      2.      1.      0. ===> KODE OBAT "<<endl;
	for(int x=0;x<6;x++)
		cout<<"	"<<data[x];
	cout<<endl;
	cout<<"======================================================================="<<endl;
	cout<<endl;
	cout<<"======================================================================="<<endl;
	cout<<"               TERIMA KASIH SUDAH MENGGUNAKAN LAYANAN KAMI " << endl;
	cout<<"======================================================================="<<endl;
	cout<<"Belanja lagi?[Y/N] = "<<pilih<<endl;
	if(pilih=='Y'&&pilih=='y')goto MenuAwal;
	cout<<endl;
	cout<<endl;
}