#include <iostream>

using namespace std;

bool isPrime(int x){
	if(x<=1){
		return 0;
	}
	if(x==2){
		return 1;
	}
	if(x>2){
		for(int i=2;i<x;i++){
			if(x%i == 0){
				return 0;
			}
		}
		return 1;
	}
	
}

main(){
	int x;
	cout<<"nhap x : ";
	cin>>x;
	
	if(isPrime(x)){
		cout<<"so "<<x<<" la so nguyen to !!!";
	}else{
		cout<<"so "<<x<<" khong phai la so nguyen to !!!";
	}
}
