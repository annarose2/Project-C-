#include <iostream>
#include <string>
#include <cmath>

using namespace std;
string angka[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh", "Sebelas"};

void satuan (int a) {
    if (a <= 11) {
        cout << angka[a] <<" ";//memanggil lokasi / index array angka
    }
}

void terbilang (long long b) {
    if (b<=11) {
        satuan(b);
    } else if ((b>11) && (b<=19)) {
        terbilang(b%10);
        cout<<"Belas ";
    } else if ((b>=20)&&(b<=99)) {
        terbilang(b/10);
        cout<<"Puluh ";
        terbilang(b%10);
    } else if ((b>=100)&&(b<=199)) {
        cout<<"Seratus ";
        terbilang(b%100);
    } else if ((b>=200)&&(b<=999)) {
        terbilang(b/100);
        cout<<"Ratus ";
        terbilang(b%100);
    } else if ((b>=1000)&&(b<=1999)) {
        cout << "Seribu ";
        terbilang(b%1000);
    } else if ((b>=2000)&&(b<=99999)) {
        terbilang(b/1000);
        cout<<"Ribu ";
        terbilang(b%1000);
    } else if ((b>=100000)&&(b<=199999)) {
        cout << "Seratus ";
        terbilang(b%100000);
    } else if ((b>=200000)&&(b<=999999)) {
        terbilang(b/1000);
        cout<<"Ribu ";
        terbilang(b%1000);
    } else if ((b>=1000000)&&(b<=999999999)) {
        terbilang(b/1000000);
        cout<<"Juta ";
        terbilang(b%1000000);
    } else if ((b>=1000000000)&&(b<=2147483647)) {
        terbilang(b/1000000000);
        cout<<"Miliar ";
        terbilang(b%1000000000);
    } else if (b>2147483647) {
        cout<<"Melebihi batas, coba angka kurang dari sama dengan 2147483647";
    }
}

int main(){
    long long nilai;
    cout << "===================================\n";
	cout << "| PROGRAM KONVERSI ANGKA KE HURUF |\n";
	cout << "===================================\n";
    cout << "Masukkan Bilangan: "; 
	cin >> nilai;
	cout << endl;
    cout << "Hasil Konversi Bilangan: ";
    if (nilai<0) {
        cout<<"Coba Masukan Batas Angka dari 0 - 2147483647";
    } else if (nilai==0){
    	cout<<"Nol";
    } else {
        terbilang(nilai);
    }
    
    return 0;
}
