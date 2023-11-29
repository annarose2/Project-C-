#include <iostream>
using namespace std;

void insertionSort(int array[], int y){
	for(int i=1; i<y; i++){
		int key = array[i];
		int j = i-1;
		while(j>=0 && array[j] > key){	
			array[j+1] = array[j];
			j--;	
		}
		array[j+1]= key;
		cout << "Proses sortingnya..." << endl;
		for (int m=0; m<y; m++){
			cout << array[m] << " ";
		}
		cout << endl;
	}
}

int main(int argc, char** argv) {
	
	int y;
	cout << "Masukkan berapa array yang diinginkan : ";
	cin >> y;
	int array[y];
	
	for(int i=0; i<y; i++){
		cout << "Masukkan angka ke indeks " << i << " : ";
		cin >> array[i];
		cout << endl;
	}
	
	insertionSort (array,  y);
	
	cout << "\nHasil akhir" << endl;
	for(int m=0; m<y; m++){
		cout << array[m] << " ";
	}
	
	cin.get();
	return 0;
}