#include<bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

class istring{
	private :
		string str;
	public :
		istring(){
			str="";
		}
		istring(const string& str){
			this->str=str;
		}
		istring(const istring& other) {
        this->str = other.str;
    }


		friend istring operator+(const istring& a,const istring& b);
		friend istring operator+(const istring& a,const string& b);
		friend istring operator+(const istring& a,char b);
		friend istring operator+(const istring& a,int b);
		friend ostream& operator<<(ostream& os, const istring& obj);
};

istring operator+(const istring& a,const istring& b){
	return istring(a.str+b.str);
}

istring operator+(const istring& a,const string& b){
	return istring(a.str+b);
}
istring operator+(const istring& a,char b){
	return istring(a.str+b);
}
istring operator+(const istring& a,int b){
	
}

ostream& operator<<(ostream& os, const istring& obj) {
    os << obj.str;
    return os;
}


main(){
	istring a("he"),b("llo");
	string x="lu";
	char y='@';
	istring c=a+b;
	istring d=a+x;
	istring e=a+y;
	cout<<c<<" "<<d<<" "<<e;
}
