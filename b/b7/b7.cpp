#include<bits/stdc++.h>

using namespace std;

class phanso{
	public :
		void setPhanSo(int a,int b){
			tu = a;
			mau = b;
		}
		void getPhanSo(){
			cout<<"phan so : "<<tu<<" / "<<mau;	
		}
	private :
		int tu,mau;	
};

main(){
	phanso ps;
	ps.setPhanSo(3,4);
	ps.getPhanSo();
}
