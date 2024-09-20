#include <iostream>

using namespace std;

void inPut(int &x,int arr[]){
	cout<<"Nhap so phan tu :";
	cin>>x;
	for(int i=0;i<x;i++){
		cout<<"Phan tu thu "<<i+1<<" la :";
		cin>>arr[i];
	}
}

void outPut(int x,int arr[]){
	cout<<"Noi dung mang : ";
	for(int i=0;i<x;i++){
		cout<<arr[i]<<" ";
	}
}

main(){
	int x;
	int arr[100];
	inPut(x,arr);
	outPut(x,arr);

	
}
