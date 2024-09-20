#include<bits/stdc++.h>

using namespace std;

class phanso{
	public :
		phanso(){
			tu = 2;
			mau = 1;
		}
		phanso(int tu,int mau){
			this->tu=tu;
			this->mau=mau;
		}
		phanso(const phanso& ps){
			this->tu=ps.tu;
			this->mau=ps.mau;
		}
		void cong(phanso &a){
			int tongmau=mau*a.mau;
			int tu1=tu*a.mau;
			int tu2=a.tu*mau;
			int tongtu=tu1+tu2;
			cout<<"kq tong : "<<tongtu<<"/"<<tongmau<<endl;
		}
		void tru(phanso &a){
			int trumau=mau*a.mau;
			int tu1=tu*a.mau;
			int tu2=a.tu*mau;
			int trutu=tu1+tu2;
			cout<<"kq tru : "<<trutu<<"/"<<trumau<<endl;
		}
		void nhan(phanso &a){
			int nhanmau=mau*a.mau;
			int nhantu=tu*a.tu;
			cout<<"kq nhan : "<<nhantu<<"/"<<nhanmau<<endl;
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
	ps1.cong(ps2);
	
}
