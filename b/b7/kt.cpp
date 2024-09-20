#include<bits/stdc++.h>

using namespace std;

void input(vector<int> &arr){
	int so;
	cout<<"Nhap so phan tu : ";
	cin>>so;
	arr.resize(so);
	for(int i=0;i<arr.size();i++){
		cout<<"arr["<<i<<"] : ";
		cin>>arr[i];
	}
}

void output(vector<int> arr){
	cout<<"mang : ";
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
}

bool check(int x){
	
	if(x<10){
		return 0;
	}
	if(x>=10){
		int nho=x;
		int a,b;
		a = x%10;
		b = a;
		x = x/10;
		while(x!=0){
			a = x%10;
			b = (b*10)+a;
			x = x/10;	
		}
		if(nho==b){
			return 1;
		}else{
			return 0;
		}
	}
	
}

void swap(int &a,int &b){
	int nho;
	nho=a;
	a=b;
	b=nho;
}

void swapL(int &a,int &b){
	int nho;
	if(a>=b){
		nho=a;
		a=b;
		b=nho;
	}
}

void SDX(vector<int> &arr){
	cout<<"mang sau khi thay the : ";
	for(int i=0;i<arr.size();i++){
		if(check(arr[i])){
			arr[i]=0;
		}
	}
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	
}

void sx(vector<int> &arr){

	//swap chan or le
	for(int i=0;i<arr.size();i++){
		for(int j=i+1;j<arr.size();j++){
			if(arr[i]%2!=0){
				swap(arr[i],arr[j]);
			}
		}
	}
	//swap chan
	for(int i=0;i<arr.size();i++){
		for(int j=i+1;j<arr.size();j++){
			if(arr[j]%2==0){
				swapL(arr[i],arr[j]);
			}
		}
	}
	//swap le
	for(int i=0;i<arr.size();i++){
		for(int j=i+1;j<arr.size();j++){
			if(arr[i]%2!=0){
				swapL(arr[i],arr[j]);
			}
		}
	}
	
	output(arr);
	
}


main(){
	vector<int> arr;
	
	input(arr);
	output(arr);
	cout<<endl;
	SDX(arr);
	cout<<endl;
	sx(arr);
	
}
