#include<bits/stdc++.h>

using namespace std;

class a{
	public :
		a(){
			cout<<"a"<<endl;
		}
		~a(){
			cout<<"~a"<<endl;
		}
};

class b : public a {
	public :
		b(){
			cout<<"b"<<endl;
		}
		~b(){
			cout<<"~b"<<endl;
		}
};

main(){
	b b;
}
