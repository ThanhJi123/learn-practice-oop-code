#include<bits/stdc++.h>

using namespace std;

void input(string arr[],int n){
	cin.ignore();
	for(int i=0;i<n;i++){
		cout<<"arr["<<i+1<<"] : ";
		getline(cin,arr[i]);
	}
}

void sort(string arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				string nho=arr[i];
				arr[i]=arr[j];
				arr[j]=nho;
			}
		}
	}
}

void display(string arr[],int n){
	cout<<"mang : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

main(){
	int n;
	string arr[100];
	cout<<"nhap so phan tu : ";
	cin>>n;
	input(arr,n);
	display(arr,n);
	sort(arr,n);
	display(arr,n);
	
}
