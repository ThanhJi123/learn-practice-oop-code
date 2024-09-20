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
	cout<<endl;
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
	cout<<"Cac so nguyen to trong mang :";
	for(int i=0;i<x;i++){
		if(check(arr[i])){
			cout<<arr[i]<<" ";
			dem++;
		}
	}
	if(dem==0){
		cout<<"khong co so nguyen to trong mang !!";
	}
}

main(){
	int x;
	int arr[100];
	inPut(x,arr);
	outPut(x,arr);
	SNT(x,arr);
}
