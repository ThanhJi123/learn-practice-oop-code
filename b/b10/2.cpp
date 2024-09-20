#include<bits/stdc++.h>

using namespace std;

class Fraction {
    long nu, de; // numerator, denominator;
public:
  Fraction(long n, long d){ nu = n; de = d;}
  void display() { cout << nu << "/" << de <<endl; }
  
  Fraction add(Fraction f) {
      nu = nu*f.de + de*f.nu;
      de = de*f.de;
      return *this;
  }
  
//  Fraction operator+(const Fraction& f){
//        long newNu = nu*f.de + de*f.nu;
//        long newDe = de * f.de;
//        return Fraction(newNu, newDe);
//    }
//    Fraction operator-(const Fraction& f){
//        long newNu = nu*f.de - de*f.nu;
//        long newDe = de * f.de;
//        return Fraction(newNu, newDe);
//    }

//  Fraction add1(Fraction f) {
//      nu = nu*f.de - de*f.nu;
//      de = de*f.de;
//      return *this;
//  }

	friend ostream& operator<<(ostream&,const Fraction&);
	friend istream& operator>>(istream&,Fraction&);
};
  ostream& operator<<(ostream& os, const Fraction& f){
    os << f.nu << "/" << f.de;
    return os;
  }
  istream& operator>>(istream& is, Fraction& f) {
    is >> f.nu >> f.de;
    return is;
  }

Fraction operator+(Fraction f1, Fraction f2) {
   return f1.add(f2);
}
//Fraction operator-(Fraction f1, Fraction f2) {
//   return f1.add1(f2);
//}


int main() {
    Fraction fa(1, 2), fb(1, 2);
    fa.display(); // 1/2 
    fb.display(); // 2/3
//    fb = fa.operator+(fb); // 1/2 + 2/3
    fb=fa+fb;
    fb.display(); // 7/6
    cout<<fb;
    cin>>fb;
    cout<<fb;
//    fb = fa.operator-(fb); // 1/2 + 2/3
//    fb.display(); // 7/6
//    fb = fa - fb; // 1/2 - 2/3
//    fb.display(); // 7/6
    return 0;
}



