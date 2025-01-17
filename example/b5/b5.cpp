#include <bits/stdc++.h>

using namespace std;

void swap(int &x,int &y){
	int nho;
	nho=x;
	x=y;
	y=nho;
}

main(){
//	int a=5,b=10;
//	cout<<"a:"<<a<<endl;
//	cout<<"b:"<<b<<endl;
//	cout<<"swap"<<endl;
//	swap(a,b);
//	cout<<"a:"<<a<<endl;
//	cout<<"b:"<<b<<endl;

	short a=2;
	short *pA;
	pA = &a;
	cout<<"a:"<<a<<endl;
	cout<<"&a:"<<&a<<endl;
	cout<<"pA:"<<pA<<endl;
	cout<<"*pA:"<<*pA<<endl;
	cout<<"&pA"<<&pA<<endl;
	cout<<"size:"<<sizeof(pA)<<endl;
	

	
}
