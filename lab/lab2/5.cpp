#include<bits/stdc++.h>

using namespace std;

void input(string &chuoi){
	cout<<"nhap chuoi : ";
	getline(cin,chuoi);
}

int noiChuoi(string chuoi1,string chuoi2){
	int ss=chuoi1.compare(chuoi2);
	if(ss==0){
		return 0;
	}
	if(ss<0){
		return -1;
	}
	if(ss>0){
		return 1;
	}
}

main(){
	string chuoi1,chuoi2;
	input(chuoi1);
	input(chuoi2);
	int kq=noiChuoi(chuoi1,chuoi2);
	cout<<kq;
}
