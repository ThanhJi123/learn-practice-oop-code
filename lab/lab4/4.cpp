#include<bits/stdc++.h>

using namespace std;

class Customer{
	private :
		int id;
		string name;
		double creditLimit;
	public :
		void input(){
			cout<<"nhap id : ";
			cin>>id;
			
			cin.ignore();
			
			cout<<"nhap ten : ";
			getline(cin,name);
			
			cout<<"nhap credit limit : ";
			cin>>creditLimit;
		}
		
		void display(){
			cout<<"id : "<<id<<endl;
			cout<<"name : "<<name<<endl;
			cout<<"credie limit : "<<creditLimit<<endl;
		}
};

main(){
	Customer c[5];
	for(int i=0;i<5;i++){
		cout<<"customer ["<<i+1<<"]"<<endl;
		c[i].input();
	}
	for(int i=0;i<5;i++){
		cout<<"customer ["<<i+1<<"]"<<endl;
		c[i].display();
	}
}
