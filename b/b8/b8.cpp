#include<bits/stdc++.h>

using namespace std;

class phanso{
	public :
		phanso(){
			tu = 5;
			mau = 6;
		}
		phanso(int tu,int mau){
			this->tu=tu;
			this->mau=mau;
		}
		phanso(const phanso& ps){
			this->tu=ps.tu;
			this->mau=ps.mau;
		}
		void getPhanSo(){
			cout<<"phan so : "<<tu<<" / "<<mau;	
		}
	private :
		int tu,mau;	
};

main(){
	phanso ps1;
	ps1.getPhanSo();
	phanso ps2(1,2);
	ps2.getPhanSo();
	phanso ps3(ps2);
	ps3.getPhanSo();
}
