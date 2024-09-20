#include<bits/stdc++.h>

using namespace std;

void swapReference(int &a,int &b){
	int nho=a;
	a=b;
	b=nho;
}
void swpaPointer(int *a,int *b){
	int nho=*a;
	*a=*b;
	*b=nho;
}

main(){
	int a=5,b=10;
	swpaPointer(&a,&b);
	cout<<a<<b;
}
