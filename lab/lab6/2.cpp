#include<bits/stdc++.h>

using namespace std;

class String{
	private :
		string s;
	public :
		String(){
			s="";
		}
		String(string s){
			this->s=s;
		}
		
		friend istream& operator>>(istream&,String&);
		friend ostream& operator<<(ostream&,String&);
		friend String operator+(String a,String b);
};

istream& operator>>(istream& is,String& s){
	getline(is,s.s);
	return is;
}

ostream& operator<<(ostream& os,String& s){
	os<<s.s<<endl;
	return os;
}
String operator+(String a,String b){
	
	return String(a.s+b.s);
}

main(){
	
	String s1,s2("llo");
	cin>>s1;
	cout<<s1;
	cout<<s2;
	String s3=s1+s2;
	cout<<s3;
	
}
