#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node *head;

int banyakList = 0;

//Function-function yang digunakan (forward declaration);
bool isEmpty();
void insert(int angka, int pos);
void hapus(int pos);
void set(int pos, int angka);
void print();
//---------------------------------------------------------------

bool isEmpty(){
	if (head == NULL){
		return true;
	} else return false;
}

void insert(int angka, int pos){
	Node *temp1 = new Node();
	temp1->data = angka;
	temp1->next = NULL;
	
	if(isEmpty() && pos != 1){
		cout << "Masukan urutan mulai dari 1!" << endl;	
	}
	else if(pos > (banyakList + 1) || pos < 1){
		cout << "Masukan urutan yang benar!" << endl;
		print();
	}else if (pos == 1){
		temp1->next = head;
		head = temp1;
		banyakList++;
		print();
	}else{
		Node *temp2 = head;
		
		for (int i = 1; i < pos - 1; i++){
			temp2 = temp2->next;
		}
		temp1->next = temp2->next;
		temp2->next = temp1;
		print();
		banyakList++;
	}
}

void hapus(int pos){
	Node *temp1 = head;
	if (isEmpty()){
		cout << "List masih/sudah kosong!" << endl;	
	}else if (pos == 1){
		head = temp1->next;
		free(temp1);
		print();
		banyakList--;
	}else if (pos > (banyakList + 1) || pos < 1){
		cout << "Masukan urutan dengan benar!" << endl;
		print();
	}else{
		for (int i = 1; i < pos - 1; i++){
			temp1 = temp1->next;
		}
		Node *temp2 = temp1->next;
		temp1->next = temp2->next;
		free(temp2);
		print();
		banyakList--;
	}
}

void set(int pos, int angka){
	Node *temp = head;
	
	if (isEmpty()){
		cout << "List kosong!" << endl;
	    return;	
	}else if (pos > banyakList || pos < 1){
	    cout << "Urutan belum/tidak terbuat!" << endl;
	    print();
		return;
	}

	for (int i = 1; i <= pos; i++){
		if (i == pos){
			temp->data = angka;
		}
		temp = temp->next;
	}
	print();
}


void print(){
	Node *temp = head;
	
	if (isEmpty()){
		cout << "List kosong!" << endl;
		return;	
	}
    
	cout << endl;
	cout << "Isi linked list: " << endl;
	while (temp != NULL){
		cout << temp->data << " | ";
		temp = temp->next;	
	}
	cout<<endl;
}

int main(){
	head = NULL;
	int pilihan;
	int angka;
	int pos;
	
	do{
		cout << "		Program Linked List 			" << endl;
		cout << "   	  Pilih Operasi Yang Diinginkan	" << endl;
		cout << "	1. Insert		3. Ganti (Set)		" << endl;
		cout << "	2. Deleted		4. Print			" << endl;
		cout << "		0. Keluar Program				" << endl;
		
		cin >> pilihan;
		
		switch (pilihan){
			case 0:
				break;
			
			case 1:
				cout << "Ingin insert ke urutan berapa? (Masukkan urutan yang benar!)" << endl;
				cin >> pos;
				cout << "Masukkan angka yang ingin di-insert: ";
				cin >> angka;
				insert(angka, pos);
				cout << endl;
				break;
				
			case 2:
				cout << "Urutan ke berapa yang ingin dihapus (delete)?" << endl;
				cin >> pos;
				hapus(pos);
				cout << endl;
				break;
				
			case 3:	
				cout << "Urutan ke berapa yang ingin diganti (set)?" << endl;
				cin >> pos;
				cout << "Masukkan angka pengganti: " << endl;
				cin >> angka;
				set(pos, angka);
				cout << endl;
				break;
			
			case 4:
				print();
				cout<<endl;
				break;
			
			default:
				cout << "Masukkan angka pilihan yang benar!" << endl;	
		}
	}
	while (pilihan != 0);
	return 0;
}