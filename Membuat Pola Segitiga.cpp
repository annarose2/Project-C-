#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Masukan Panjang Pola: ";
	cin>>n;
	
	for(int a = 1; a < n; a++){
		for(int b = n; b > a; b--){
			cout<<" ";
		}
		for (int c = 1; c <= a; c++){
			cout<<"*";
		}	
		cout<<endl;
	}
	
	for(int a = 1; a <= n; a++){
		for(int b = 1; b < a; b++){
			cout<<" ";
		}
		for (int c = n; c >= a; c--){
			cout<<"*";
		}	
		cout<<endl;
	}
	cin.get();
	return 0;
}