#include<bits/stdc++.h>

using namespace std;

class Complex{
	private :
		double real,imag;
	public :
		Complex(){
			real=0;
			imag=0;
		}
		Complex(double real,double imag){
			this->real=real;
			this->imag=imag;
		}
		Complex(Complex &c){
			this->real=c.real;
			this->imag=c.imag;
		}
		void display(){
			cout<<"complex : "<<real<<" + "<<imag<<"i"<<endl;
		}
};

main(){
	Complex c1,c2(1,1),c3(c2);
	c1.display();
	c2.display();
	c3.display();
}
