#include<iostream>
using namespace std;

void Selection_Sort (int data[], int n){

	int temp, key;
	
	for(int i=0; i<n-1; i++){
		key = i;
		for(int j=i+1; j<n; j++){
			if(data[j]>data[key]){
				key=j;
			}
		}
		
		temp=data[i];
		data[i]=data[key];
		data[key]=temp;
	}
}
int main(){
	
	int data [10], n;

	cout<<"Algoritma Selection Sort \n\n";
	
	cout<<"Masukan Banyak Data : ";
	cin>>n;
	cout<<endl;
	
	for(int i=0; i<n; i++){
		cout<<"Data ke "<< i+1 <<" : ";
		cin>>data[i];
	}
	
	cout<<"\n Data Sebelum Diurutkan : ";
	
	for(int i=0; i<n; i++){
		cout<<data[i]<<" ";
	}
	
	Selection_Sort(data, n);
	
	cout<<"\n Data Setelah Diurutkan : ";
	
	for(int i=0; i<n; i++){
		cout<<data[i]<<" ";
	}
}