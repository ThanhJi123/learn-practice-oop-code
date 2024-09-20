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

void swap(int &x,int &y){
	int nho=0;
	if(x>=y){
		nho=y;
		y=x;
		x=nho;
	}
}

void iSort(int x,int arr[]){
//	cout<<"Mang sau khi duoc sap xep : ";
	for(int i=0;i<x;i++){
		for(int j=i+1;j<x;j++){
			if(arr[i]>=arr[j]){
				swap(arr[i],arr[j]);
			}
		}
	}
	cout<<"Mang sau khi duoc sap xep : ";
	for(int i=0;i<x;i++){
		cout<<arr[i]<<" ";
	}
}

main(){
	int x;
	int arr[100];
	inPut(x,arr);
	outPut(x,arr);
	cout<<endl;
	iSort(x,arr);

	
}
