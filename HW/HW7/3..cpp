#include<bits/stdc++.h>

using namespace std;

class Fraction{
	public :
		
		void input(){
			cout<<"nhap tu so : ";
			cin>>tu;
			cout<<"nhap mau so : ";
			cin>>mau;
		}
		void display(){
			cout<<"phan so : "<<tu<<"/"<<mau;
		}
	private :
		int tu,mau;
};

main(){
	Fraction f;
	f.input();
	f.display();
	
}
