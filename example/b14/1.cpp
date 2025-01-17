#include<bits/stdc++.h>
using namespace std;

class Shape {
public:
  virtual double area(){ return 0; }
};
class Rectangle:public Shape {
  double width, height;
public:
  Rectangle(double w,double h){
      width = w; height = h;      
  }
  double area() {
      return width * height; 
  }
};

int main() {
 Rectangle rect(2, 3);
 cout << rect.area() << endl;
 Shape& rSh = rect;
 cout << rSh.area() << endl;
 Shape* pSh = &rect;
 cout << pSh->area() << endl;
  Shape sh;
 cout<<sh.area();
}

