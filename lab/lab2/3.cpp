#include<bits/stdc++.h>

using namespace std;

void input(string &chuoi){
	cout<<"nhap chuoi : ";
	getline(cin,chuoi);
}
void demchuoi(string chuoi){
	int dem=0;
	for(int i=0;i<chuoi.size();i++){
		dem++;
	}
	cout<<"do dai cua chuoi la "<<dem;
}

main(){
	string chuoi;
	input(chuoi);
	demchuoi(chuoi);
}
