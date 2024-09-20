#include<bits/stdc++.h>

using namespace std;

class Circle;

class Rectangle{
	private :
		double dai,rong,dienTich;
	public :
		void input(){
			cout<<"nhap chieu dai : ";
			cin>>dai;
			cout<<"nhap chieu rong : ";
			cin>>rong;
			dienTich=dai*rong;
		}
		void display(){
			cout<<"Rectangle || chieu dai : "<<dai<<" chieu rong : "<<rong<<" dien tich hinh : "<<dienTich<<endl;
		}
		friend void larger(Rectangle &r,Circle &c);
};

class Circle{
	private :
		double banKinh,pi=3.14,dienTich;
	public :
		void input(){
			cout<<"nhap ban kinh : ";
			cin>>banKinh;
			dienTich=pi*banKinh*banKinh;
		}
		void display(){
			cout<<"Circle || ban kinh : "<<banKinh<<" dien tich hinh : "<<dienTich<<endl;
		}
		friend void larger(Rectangle &r,Circle &c);
};

void larger(Rectangle &r,Circle &c){
	if(r.dienTich>c.dienTich){
		cout<<"dien tich Rectangle > Circle !"<<endl;
	}else if(r.dienTich<c.dienTich){
		cout<<"dien tich Rectangle < Circle !"<<endl;
	}else{
		cout<<"dien tich Rectangle = Circle !"<<endl;
	}
}

main(){
	Rectangle r;
	Circle c;
	
	r.input();
	r.display();
	
	c.input();
	c.display();
	
	larger(r,c);
	
}
