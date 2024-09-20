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
		friend class Circle;
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
		void larger(Rectangle &r){
			if(r.dienTich>dienTich){
				cout<<"dien tich Rectangle > Circle !"<<endl;
			}else if(r.dienTich<dienTich){
				cout<<"dien tich Rectangle < Circle !"<<endl;
			}else{
				cout<<"dien tich Rectangle = Circle !"<<endl;
			}
		}
};


main(){
	Rectangle r;
	Circle c;
	
	r.input();
	r.display();
	
	c.input();
	c.display();
	
	c.larger(r);
	
}
