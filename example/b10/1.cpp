#include<bits/stdc++.h>

using namespace std;

class phanSo{
	public :
		void input(){
			cout<<"nhap tu so : ";
			cin>>tu;
			cout<<"nhap mau so : ";
			cin>>mau;
		}
		void cong(phanSo &ps){
			int tongmau=mau*ps.mau;
			int tu1=tu*ps.mau;
			int tu2=ps.tu*mau;
			int tongtu=tu1+tu2;
			if(tongtu==tongmau){
				cout<<"tong phan so : 1"<<endl;
			}else{
				cout<<"tong phan so : "<<tongtu<<"/"<<tongmau<<endl;	
			}
		}
		void tru(phanSo &ps){
			int trumau=mau*ps.mau;
			int tu1=tu*ps.mau;
			int tu2=ps.tu*mau;
			int trutu=tu1-tu2;
			if(trutu==0){
				cout<<"tru phan so : 0"<<endl;
			}else{
				cout<<"tru phan so : "<<trutu<<"/"<<trumau<<endl;	
			}
		}
		phanSo operator+(phanSo &ps){
			int tongmau=mau*ps.mau;
			int tu1=tu*ps.mau;
			int tu2=ps.tu*mau;
			int tongtu=tu1+tu2;
			if(tongtu==tongmau){
				cout<<"tong phan so : 1"<<endl;
			}else{
				cout<<"tong phan so : "<<tongtu<<"/"<<tongmau<<endl;	
			}
		}
		
		void nhan(phanSo &ps){
			
		}
	private :
		int tu,mau;	
};

main(){
	phanSo  p1,p2;
	p1.input();
	p2.input();
	p1.operator+(p2);
//	p1.cong(p2);
//	p1.tru(p2);
}
