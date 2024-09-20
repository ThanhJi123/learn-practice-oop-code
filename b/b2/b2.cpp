#include <iostream>

using namespace std;

int isPrime(int x){
	if(x<=1){
		return -1;
	}
	if(x==2){
		return 1;
	}
	if(x>2){
		for(int i=2;i<x;i++){
			if(x%i == 0){
				return -1;
			}
		}
		return 1;
	}
	
}

float getAverage(float a,float b){
	return (a+b)/2;
}
float getAverage(float a,float b,float c){
	return (a+b+c)/3;
}
float getAverage(float a,float b,float c,float d){
	return (a+b+b+c)/4;
}

int sum(int a,int b,int c){
	return a+b+c;
}
int sum(int a,int b,int c=0);
int sum(int a,int b=0,int c);
int sum(int a,int b=0,int c=0);
int sum(int a=0,int b,int c=0);

main(){
	int x=1;
	int b=0;
	b=isPrime(x);
	cout<<b;
//	if(b==-1){
//		cout<<"so "<<x<<" khong phai la so nguyen to !!!";
//	}
//	if(b==1){
//		cout<<"so "<<x<<" la so nguyen to !!!";
//	}
	cout<<endl<<"hello"<<endl;
	
//	double a=0;
//	cin>>a;
//	cout<<int(a)<<endl;
//	cout<<a;


//	cout<<getAverage(1,2)<<endl;
//	cout<<getAverage(1,2,3)<<endl;
//	cout<<getAverage(1,2,3,4)<<endl;

	cout<<sum(5,10,15);
	
	
}
