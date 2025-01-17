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

int maxArr(int x,int arr[]){
	int dem=arr[0];
	for(int i=0;i<x;i++){
		if(dem < arr[i]){
			dem=arr[i];
		}
	}
	return dem;	
}

int check(int so){
	if(so<=1){
		return 0;
	}
	if(so==2){
		return 1;
	}
	if(so>2){
		for(int i=2;i<so/2+1;i++){
			if(so%i==0){
				return 0;
			}
		}
		return 1;
	}
}

void SNT(int x,int arr[]){
	int dem=0;
	if(x==0){
		cout<<"Mang rong !!";
	}
//	else{
		cout<<"Cac so nguyen to trong mang :";
		for(int i=0;i<x;i++){
//			cout<<"test"<<i+1;
			if(check(arr[i])){
//				cout<<"test";
				cout<<arr[i]<<" ";
				dem++;
			}
		}
		if(dem==0){
				cout<<"khong co so nguyen to trong mang !!";
		}
//	}
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

void chen(int &x,int arr[]){
	++x;
	int so;
	cout<<"Nhap so can them : ";
	cin>>so;
	arr[x-1]=so;
//	outPut(x,arr);
	iSort(x,arr);
}

main(){
	int x;
	int max;
	int arr[100];
	inPut(x,arr);
	outPut(x,arr);
	max=maxArr(x,arr);
	cout<<endl<<"Max mang :"<<max<<endl;
	SNT(x,arr);
	cout<<endl;
	iSort(x,arr);
	cout<<endl;
	chen(x,arr);
	
}
