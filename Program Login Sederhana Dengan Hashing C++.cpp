#include <iostream>
using namespace std;

// Hash Table
struct HashTable{
	//Data
	string username, password;
} dataAkun[26];

// function hash
int hashFunction (string key){
	return tolower(key[0]) - 97;
}

//cek daftar
bool cekDaftar (string username,string password){
	int index = hashFunction(password);
	
	//cek index masih kosong atau sudah ditempati
	if(dataAkun[index].username != "" && dataAkun[index].password != ""){
		// kalo sel index hash tidak table kosong
		cout << "User sudah ada !!" << endl;
		return false;
	}else{
		//kalo sel index di hash table kosong
		dataAkun[index].username = username;
		dataAkun[index].password = password;
		return true;
	}
}

//cek login
bool cekLogin (string username, string password){
	//Hashing dulu
	int index = hashFunction(password);
	
	//Cek username dan password benar tidak
	if (dataAkun[index].username == username && dataAkun[index].password == password){
		//kalo benar
		return true;
	}else{
		return false;
	}
}

//Cek hapus akun
bool cekHapusAkun (int index){
	//cek apakah sel index di hash table kosong atau tidak
	if(dataAkun[index].username == "" && dataAkun[index].password == ""){
		//kalo selnya kosong
		cout << "\nData akun tidak ada !!" << endl;
		return false;
	}else{
		//kalo ada datanya
		dataAkun[index].username == "";
		dataAkun[index].password == "";
		return true;
	}
}

//print data akun
void printDataAkun(){
	cout << "\nData akun: " << endl;
	cout << "| Index\t - Username - Password |" << endl;
	for(int i = 0; i < 26; i++){
		cout << "| " << i << "\t - ";
		if(dataAkun[i].username == ""){
			cout << "(Kosong) - "; 
		}else{
			cout << dataAkun[i].username << " - ";
		}
		if(dataAkun[i].password == ""){
			cout << "(Kosong) |" << endl;
		}else{
			cout << dataAkun[i].password << " |" << endl;
		}
	}
	cout << endl;
}


//view daftar
void viewDaftar(){
	string username, password;
	cout << "\n== MENU DAFTAR ==" << endl;
	cout << "Masukkan username & password" << endl;
	cout << "Isi Username Anda : ";
	cin >> username;
	cout << "Isi Password Anda : ";
	cin >> password;
	
	if(cekDaftar(username, password)){
		cout << "Akun berhasil terdaftar !!" << endl;
	}else{
		cout << "Akun gagal terdaftar !!" << endl;
	}
	cout << endl;
}

//view tambah akun
void viewTambahAkun(){
	string username, password;
	cout << "\n== MENU TAMBAH AKUN ==" << endl;
	cout << "Masukan username & password" << endl;
	cout << "Isi username akun : ";
	cin >> username;
	cout << "Isi password akun : ";
	cin >> password;
	
	if(cekDaftar(username, password)){
		cout << "Akun berhasil terdaftar !!" << endl;
	}else{
		cout << "Akun gagal terdaftar !!" << endl;
	}
	cout << endl;
}

//view hapus akun
void viewHapusAkun(){
	int index;
	cout << "\n== MENU HAPUS AKUN ==" << endl;
	cout << "Isi Index : ";
	cin >> index;
	
	if (cekHapusAkun(index)){
		cout << "Data akun berhasil dihapus !!" << endl;
	}else{
		cout << "Data akun gagal dihapus !!" << endl;
	}
	cout << endl;
}

//view menu login
void viewMenuLogin(){
	while(true){
		string pilihan;
		cout << "\n== MENU ADMIN ==" << endl;
		cout << "Menu Pilihan :" << endl;
		cout << "1. Tambah Akun" << endl;
		cout << "2. Hapus Akun" << endl;
		cout << "3. Lihat Data Akun" << endl;
		cout << "4. Logout" << endl;
		cout << "pilih menu [1/2/3/4] : ";
		cin >> pilihan;
		
		if(pilihan == "1"){
			viewTambahAkun();
		}else if(pilihan == "2"){
			viewHapusAkun();
		}else if(pilihan == "3"){
			printDataAkun();
		}else if(pilihan == "4"){
			cout << "Anda berhasil logout" << endl;
			break;
		}else{
			cout << "Pilihan tidak tersedia !!" << endl;
		}
		cout << endl;
	}
}

// view login
void viewLogin(){
	string username, password;
	cout << "\n== VIEW LOGIN ==" <<  endl;
	cout << "Masukkan username & password" << endl;
	cout << "Isi username Anda : ";
	cin >> username;
	cout << "Isi password Anda : ";
	cin  >> password;
	
	if(cekLogin(username, password)){
		cout << "\nLogin berhasil !!" << endl;
		viewMenuLogin();
	}else{
		cout << "\nLogin gagal !!" << endl;
	}
	cout << endl;
}

int main(){
	int pilihan;
	
	do{
		cout << "== PROGRAM LOGIN SEDERHANA DENGAN HASHING ==" << endl;
		cout << "Menu Pilihan :" << endl;
		cout << "1. Daftar" << endl;
		cout << "2. Login" << endl;
		cout << "3. Keluar" << endl;
		cout << "Pilih Menu [1/2/3] : ";
		cin >> pilihan;
		
		switch (pilihan){
			case 1:
				viewDaftar();
				cout << endl;
				break;
			
			case 2:
				viewLogin();
				cout << endl;
				break;
				
			case 3:
				cout << "\nTerima Kasih sudah menggunakan aplikasi login sederhana." << endl;
				cout << endl;
				break;
				
			default:
				cout << "\n Pilihan tidak tersedia !!" << endl;
				cout << endl;
		}
	}
	while (pilihan != 3);
	return 0;
}