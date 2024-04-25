//Perbedaan x++ dan ++x
	#include <iostream>
	using namespace std;
	
	int main()
	{
	int Faathir, Akbar;
	Faathir = 22; Akbar = 66 + Faathir++;
	cout <<"Tanda ++ dibelakang ";
	cout << endl;
	cout << "Faathir = " << Faathir << endl;
	cout << "Akbar = " << Akbar << endl;
	cout << endl;
	Faathir = 22; Akbar = 66 + ++Faathir;
	cout <<"Tanda ++ didepan ";
	cout << endl;
	cout << "Faathir = " << Faathir << endl;
	cout << "Akbar = " << Akbar << endl;
	cout << endl;
	
	cin.get();
	} 
	