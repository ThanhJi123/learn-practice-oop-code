#include<bits/stdc++.h>
#include<string>

using namespace std;

void inputArr(vector<int> *arr){
	int so;
	cout<<"Nhap so phan tu :";
	cin>>so;
	arr->resize(so);
	for(int i=0;i<arr->size();i++){
		cout<<"vector"<<"["<<i<<"] : ";
		cin>>(*arr)[i];
	}
}

void displayArr(vector<int> arr){
	cout<<"mang : ";
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

main(){
	vector<int> arr;
	
	inputArr(&arr);
	displayArr(arr);
	
}
