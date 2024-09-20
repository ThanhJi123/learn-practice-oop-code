#include<bits/stdc++.h>

using namespace std;

class Fraction {
    int tu, mau;
public:
  Fraction(){ tu = 0; mau = 0;};
  Fraction(int t, int m){ tu = t; mau = m;}
  
  friend ostream& operator<<(ostream&,Fraction&);
  friend istream& operator>>(istream&,Fraction&);
  friend Fraction operator*(Fraction a,Fraction b);
  friend Fraction operator/(Fraction a,Fraction b);
  friend Fraction operator++(Fraction a);
  friend Fraction operator--(Fraction a);
  friend Fraction operator-(Fraction a,Fraction b);
  
};

ostream& operator<<(ostream& os,Fraction& f){
	if(f.tu==0){
		os<<"0"<<endl;
	}else{
		os<<f.tu<<"/"<<f.mau<<endl;
	}
}
istream& operator>>(istream& is,Fraction& f){
	cout<<"nhap tu : ";
	is>>f.tu;
	cout<<"nhap mau : ";
	is>>f.mau;
}

Fraction operator*(Fraction a,Fraction b){
	return Fraction(a.tu*b.tu,a.mau*b.mau);
}
Fraction operator/(Fraction a,Fraction b){
	return Fraction(a.tu*b.mau,a.mau*b.tu);
}
Fraction operator++(Fraction a){
	return Fraction(a.tu+1*a.mau,a.mau);
}
Fraction operator--(Fraction a){
	return Fraction(a.tu-1*a.mau,a.mau);
}
Fraction operator-(Fraction a,Fraction b){
	return Fraction(a.tu*b.mau-b.tu*a.mau,a.mau*b.mau);
}

int main() {
	Fraction f1,f2(2,2);
	cin>>f1;
	cout<<f1;
	Fraction fnhan=f1*f2;
	Fraction fchia=f1/f2;
	Fraction ftru=f1-f2;
	Fraction fcongcong=++f1;
	Fraction ftrutru=--f1;
	
	cout<<fnhan<<fchia<<ftru<<fcongcong<<ftrutru;
    

    return 0;
}



