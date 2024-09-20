#include<bits/stdc++.h>

using namespace std;

void input(string &chuoi){
	cout<<"nhap chuoi : ";
	getline(cin,chuoi);
}

void noiChuoi(string chuoi1,string chuoi2){
	cout<<"noi chuoi : "<<chuoi1+chuoi2;
}

main(){
	string chuoi1,chuoi2;
	input(chuoi1);
	input(chuoi2);
	noiChuoi(chuoi1,chuoi2);
}
