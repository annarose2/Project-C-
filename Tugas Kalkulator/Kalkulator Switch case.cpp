#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main() {
		float a, b, hasil;
 	 	char aritmatika;

		cout <<"--------------------------------------------\n";
  		cout <<"Kalkulator sederhana\n";
 		cout <<"--------------------------------------------\n";

		  cout <<"Masukkan nilai 1 : ";
		  cin >> a;
		  cout <<"Masukkan nilai 2 : ";
		  cin >> b;

		  cout <<"Pilih Operator   : ";
		  cin >> aritmatika;
		
		  cout <<"\nHasil Operasi "<< aritmatika<< " "<<"adalah : ";
		
		  switch(aritmatika){
		  case '+' : hasil = a + b;
		  	break;
		  case '-' : hasil = a - b;
		    break;
		  case '*' : hasil = a * b;
		    break;
		  case '/' : hasil = a / b;
		  	break;
		    default :
		  cout <<"Anda Salah Memasukkan Operator\n";
		}
		  cout << hasil <<endl;
		  cout <<"--------------------------------\n";
  	cin.get();
	return 0;
}
