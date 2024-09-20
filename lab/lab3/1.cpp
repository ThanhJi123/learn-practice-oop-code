#include<bits/stdc++.h>

using namespace std;

class Complex{
	private :
		double real;
    	double imag;
    public :
    	Complex(double r,double i){
    		real=r;
    		imag=i;
		}
		void display(){
			cout<<"Complex : "<<real<<"+i"<<imag<<endl;
		}
		Complex add(Complex &complex){
			return Complex((real+complex.real),(imag+complex.imag));
		}
		Complex subtract(Complex &complex){
			return Complex((real-complex.real),(imag-complex.imag));
		}
	
};

main(){
	Complex complex1(1,2),complex2(1,2);
	complex1.display();
	complex2.display();
	
	Complex c3 = complex1.add(complex2);
	cout<<"add ";c3.display();
	
	Complex c4 = complex1.subtract(complex2);
	cout<<"subtract ";c4.display();
	
}
