#include<bits/stdc++.h>

using namespace std;

class Fraction {
    int nu, de;
public:
  Fraction(){ nu = 0; de = 0;};
  Fraction(int n, int d){ nu = n; de = d;}
  void display() { cout << nu << "/" << de <<endl; }
  
  Fraction add(Fraction f) {
      nu = nu*f.de + de*f.nu;
      de = de*f.de;
      return *this;
  }
  
  Fraction add1(Fraction f) {
      nu = nu*f.de - de*f.nu;
      de = de*f.de;
      return *this;
  }
  Fraction add2(Fraction f) {
      nu = nu*f.nu;
      de = de*f.de;
      return *this;
  }
  Fraction add3(Fraction f) {
      nu = nu*f.de;
      de = de*f.nu;
      return *this;
  }
};

Fraction operator+(Fraction f1, Fraction f2) {
   return f1.add(f2);
}
Fraction operator-(Fraction f1, Fraction f2) {
   return f1.add1(f2);
}
Fraction operator*(Fraction f1, Fraction f2) {
   return f1.add2(f2);
}
Fraction operator/(Fraction f1, Fraction f2) {
   return f1.add3(f2);
}


int main() {
    Fraction fa(1, 2), fb(1, 2),fc;
    fa.display(); // 1/2 
    fb.display(); // 1/2

    fc=fa+fb;
    fc.display(); // 4/4
    fc=fa-fb;
    fc.display(); // 0/4
    fc=fa*fb;
    fc.display(); // 1/4
    fc=fa/fb;
    fc.display(); // 2/2
    

    return 0;
}



