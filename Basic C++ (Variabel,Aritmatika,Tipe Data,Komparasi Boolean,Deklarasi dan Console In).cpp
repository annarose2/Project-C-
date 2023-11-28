#include <iostream>
#include<limits>
using namespace std;


int main(int argc, char** argv) {
///1. Materi Pengenalan Variabel	
	int z=7;
	cout<<z<<endl;
	
///2. Materi Tipe Data Fundamental
	// bilangan bulat
	int		a = 5;
	long	b = 6;
	short	c = 7;
	
	// bilangan decimal
	float	d = 1.0;
	double	e = 2.5;
	
	// character
	char	f = 'a'; //character 1-bit 
	
	// boolean
	bool	g = true; // true/false
		
	cout << a << endl;
	cout << sizeof(a) << " byte " << endl;
	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<int>::min() << endl;
	
	cout << b << endl;
	cout << sizeof(b) << " byte " << endl;
	cout << numeric_limits<long>::max() << endl;
	cout << numeric_limits<long>::min() << endl;
	
	cout << c << endl;
	cout << sizeof(c) << " byte " << endl;
	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<short>::min() << endl;
	
	cout << f << endl;


///3. Materi Komparasi (Relasi) Boolean
	int h=2;
	int i=2;
	
	bool hasil1, hasil2;
	
	//komparasi
	
	//sebanding ==
	hasil1 = (h==i);
	//tidak sebanding !=
	hasil2 = (h!=i);
	
	cout<<hasil1<<endl;
	cout<<hasil2<<endl;
	
	//kurang dari
	hasil1 = (h<i);
	//lebih dari
	hasil2 = (h>i);
	
	cout<<hasil1<<endl;
	cout<<hasil2<<endl;
	
	//kurang dari sama dengan
	hasil1 = (h<=i);
	//lebih dari sama dengan
	hasil2 = (h>=i);
	
	cout<<hasil1<<endl;
	cout<<hasil2<<endl;
	

///4. Materi Deklarasi dan Console In
	int j;
	j = 1;
	cout<<j<<endl;
	
	int k;
	cout<<"masukan nilai : ";
	cin>>k;
	cout<<"nilai yang anda masukan adalah : ";
	cout<<k<<endl;

///5. Aritmatika
	//Aritmatika Bilangan Bulat
	int l=6;
	int m=4;
	
	int hasil;
	// operator +,-,*,/,%
	
	//penjumlahan
	hasil = l+m;
	cout <<l<<"+"<<m<<"="<<hasil<<endl;

	//pengurangan
	hasil = l-m;
	cout <<l<<"-"<<m<<"="<<hasil<<endl;
	
	//perkalian
	hasil = l*m;
	cout <<l<<"*"<<m<<"="<<hasil<<endl;
	
	//pembagian
	hasil = l/m;
	cout <<l<<"/"<<m<<"="<<hasil<<endl;
	
	//modulus
	hasil = l%m;
	cout <<l<<"%"<<m<<"="<<hasil<<endl;
	
	//urutan eksekusi
	hasil = (l+m)*l;
	cout <<hasil<<endl;


	//Aritmatika Bilangan Desimal
	int 	n=6;
	float 	o=4;
	
	float hasil12;
	// operator +,-,*,/,%
	
	//penjumlahan
	hasil12 = n+o;
	cout <<n<<"+"<<o<<"="<<hasil12<<endl;

	//pengurangan
	hasil12 = n-o;
	cout <<n<<"-"<<o<<"="<<hasil12<<endl;
	
	//perkalian
	hasil12 = n*o;
	cout <<n<<"*"<<o<<"="<<hasil12<<endl;
	
	//pembagian
	hasil12 = n/o;
	cout <<n<<"/"<<o<<"="<<hasil12<<endl;
	
	//modulus
	hasil12 = n%o;
	cout <<n<<"%"<<o<<"="<<hasil12<<endl;

	cin.get();
	return 0;
	
	
}
