#include<bits/stdc++.h>
#include<string>

using namespace std;

void inputx(int &x){
	cout<<"Nhap x:";
	cin>>x;
}

void displayx(int x){
	cout<<"x : "<<x<<endl;
}

void inputArr(vector<int> &arr){
	int so;
	cout<<"Nhap so phan tu :";
	cin>>so;
	arr.resize(so);
	for(int i=0;i<arr.size();i++){
		cout<<"vector"<<"["<<i<<"] : ";
		cin>>arr[i];
	}
}

void displayArr(vector<int> arr){
	cout<<"mang : ";
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void inputString(string &chuoi){
	cout<<"Nhap chuoi : ";
	cin.ignore();
	getline(cin,chuoi);
//	cin>>chuoi;
}

void displayString(string chuoi){
	cout<<"chuoi : "<<chuoi;
}

main(){
	int x;
	vector<int> arr;
	string chuoi;
	
	inputx(x);
	displayx(x);
	
	inputArr(arr);
	displayArr(arr);
	
	inputString(chuoi);
	displayString(chuoi);

//	displayx(x);
//	displayArr(arr);
//	displayString(chuoi);
}
