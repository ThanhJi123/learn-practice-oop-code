#include<bits/stdc++.h>

using namespace std;

void swapIntR(int &a,int &b) {
    int nho = a;
    a = b;
    b = nho;
}

void swapFloatR(float &a,float &b) {
    float nho = a;
    a = b;
    b = nho;
}

void swapDoubleR(double &a,double &b) {
    double nho = a;
    a = b;
    b = nho;
}

//----

void swapIntP(int *a,int *b) {
    int nho = *a;
    *a = *b;
    *b = nho;
}

void swapFloatP(float *a,float *b) {
    float nho = *a;
    *a = *b;
    *b = nho;
}

void swapDoubleP(double *a,double *b) {
    double nho = *a;
    *a = *b;
    *b = nho;
}


main(){
//	cout<<"hello";
	int a=5,b=10;
	float c=5.5,d=10.10;
	double e=2.2,f=4.4;
	swapIntR(a,b);
	swapFloatR(c,d);
	swapDoubleR(e,f);
	cout<<"a,b:"<<a<<" "<<b<<endl;
	cout<<"c,d:"<<c<<" "<<d<<endl;
	cout<<"e,f:"<<e<<" "<<f<<endl;
	cout<<"----------------"<<endl;
	swapIntP(&a,&b);
	swapFloatP(&c,&d);
	swapDoubleP(&e,&f);
	cout<<"a,b:"<<a<<" "<<b<<endl;
	cout<<"c,d:"<<c<<" "<<d<<endl;
	cout<<"e,f:"<<e<<" "<<f<<endl;
	
}
