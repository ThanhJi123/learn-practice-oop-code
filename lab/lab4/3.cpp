#include<bits/stdc++.h>

using namespace std;

class Counter{
	private :
		static int count;
	public :
		Counter(){
			count++;
		}
		static void showCount(){
			cout<<"so luong doi tuong duoc khoi tao la : "<<count<<endl;
		}
};
int Counter::count = 0;
main(){
	Counter c1;
	Counter::showCount();
	Counter c2;
	Counter::showCount();
}
