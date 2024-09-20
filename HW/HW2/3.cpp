#include<bits/stdc++.h>

using namespace std;

void input(int a[],int &n){
	cout<<"nhap so phan tu : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"a["<<i+1<<"] : ";
		cin>>a[i];
	}
}

void printLargestNumbers(int a[],int n,int k){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<=a[j]){
				int nho=a[i];
				a[i]=a[j];
				a[j]=nho;
			}
		}
	}
	for(int i=0;i<k;i++){
		cout<<a[i]<<" ";
	}
}

main(){
	int a[100],n,k;
	input(a,n);
	
	cout<<"nhap k (k<=n) : ";
	cin>>k;
	
	while(!(k<=n && k>=0)){
		cout<<"nhap lai k : ";
		cin>>k;
	}
	if(k==0){
		
	}else{
		cout<<"k gia tri lon : ";printLargestNumbers(a,n,k);
	}
}
