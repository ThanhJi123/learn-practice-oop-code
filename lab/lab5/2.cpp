#include<bits/stdc++.h>

using namespace std;

class Time{
	private :
		int h,m,s;
	public :
		Time(){
			h=0;
			m=0;
			s=0;
		}
		Time(int h,int m,int s){
			this->h=h;
			this->m=m;
			this->s=s;
		}
		Time(Time &t){
			this->h=t.h;
			this->m=t.m;
			this->s=t.s;
		}
		void display(){
			cout<<"time || hh:mm:ss : "<<h<<":"<<m<<":"<<s<<endl;
		}
};

main(){
	Time t1,t2(9,9,9),t3(t2);
	t1.display();
	t2.display();
	t3.display();
}
