#include<iostream>
using namespace std;

void swap(int arr[], int pos1, int pos2){
	int temp;
	temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}

int partisi(int arr[], int rendah, int tinggi, int pivot){
	int i = rendah;
	int j = rendah;
	while (i <= tinggi){
		if(arr[i] > pivot){
			i++;
		}
		else{
			swap(arr,i,j);
			i++;
			j++;
		}
	}
	return j-1;
}

void quickSort(int arr[], int rendah, int tinggi){
	if(rendah < tinggi){
		int pivot = arr[tinggi];
		int pos = partisi(arr,rendah,tinggi,pivot);
		
		quickSort(arr, rendah, pos-1);
		quickSort(arr, pos+1, tinggi);
	}
}

int main(){
	int n;
	cout<<"Masukan ukuran array: ";
	cin>>n;
	cout<<"Masukan nilai sebanyak ukuran array: ";
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>> arr[i];
	}
	quickSort(arr, 0, n-1);
	cout<<"Array yang sudah diurutkan: ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
}