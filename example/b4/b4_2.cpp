#include <bits/stdc++.h>

using namespace std;

void input(vector<int>& vt){
	cout<<"Nhap so phan tu : ";
	int n;
	cin>>n;
	vt.resize(n);
	for(int i=0;i<vt.size();i++){
		int x;
		cout<<"nhap gia tri "<<i+1<<" : ";
		cin>>vt[i];
		
//		vt.push_back(x);
		
	}
}

void output(vector<int> vt){
	cout<<"mang : ";
	for(int i=0;i<vt.size();i++){
		cout<<vt[i]<<" ";
	}
}

void nhap(int a,int b){
	a=5,b=6;
	cout<<"&a1,&b1:"<<&a<<" "<<&b<<endl;
	cout<<"a1.b1"<<a<<b<<endl;
}

main(){
//	vector<int> vt;
//	input(vt);
//	output(vt);
	int a=1,b=2;
	nhap(a,b);
	cout<<"&a2,&b2:"<<&a<<" "<<&b<<endl;
	cout<<"a,b"<<a<<b;
}
