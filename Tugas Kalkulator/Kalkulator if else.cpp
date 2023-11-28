#include <iostream>
using namespace std;

int main(){
	float a,b,hasil;
	char aritmatika;
	
	cout<< "Selamat Datang diprogram kalkulator \n\n"<<endl;
	
	//input dari user
	cout<< "Masukan nilai pertama : ";
	cin>> a;
	cout<< "Masukan nilai kedua : ";
	cin>> b;
	cout<< "Pilih operator (+, -, /, *) : ";
	cin>> aritmatika;
	
	cout<< "\nHasil perhitungan : ";
	cout<< a << aritmatika << b;
	
	if (aritmatika == '+'){
		hasil = a + b;
	} else if (aritmatika == '-'){
		hasil = a - b;
	} else if (aritmatika == '/'){
		hasil = a / b;
	} else if (aritmatika == '*'){
		hasil = a * b;
	} else{
		cout<< " Operator anda salah " <<endl;
	}
		
	cout<< " = " << hasil << endl;
	
	cin.get();
	return 0;
}
