#include <iostream>
using namespace std;

int fibonacci (int n);

int main(){
	
	int angka,hasil;
	cout << "Menghitung nilai fibonacci ke : ";
	cin >> angka;
	hasil = fibonacci(angka);
	
	cout << "Bilangan Fibonacci ke-" << angka << " adalah : ";
	cout << hasil << endl;
	
	return 0;
}

int fibonacci (int n){

	if((n == 0)||(n == 1)){
		return n;
	} else {
		return fibonacci (n-1) + fibonacci (n-2);
	}
}