#include<bits/stdc++.h>
#include <iostream>

using namespace std;

class PhanSo{
	private :
		int tu,mau;
	public :
		PhanSo(){
			tu=0;
			mau=0;
		}
//		PhanSo(int tu,int mau){
//			this->tu=tu;
//			this->mau=mau;
//		}
		PhanSo(const PhanSo& a){
			this->tu=a.tu;
			this->mau=a.mau;
		}
			PhanSo(int tu,int mau){
			this->tu=tu;
			this->mau=mau;
		}
		
		
		friend istream& operator>>(istream&,PhanSo&);
		friend ostream& operator<<(ostream&,PhanSo&);
		
		friend PhanSo operator+(PhanSo a,PhanSo b);
		friend PhanSo operator-(PhanSo a,PhanSo b);
//		friend PhanSo operator+(const PhanSo& a, const PhanSo& b);
};
istream& operator>>(istream& is,PhanSo& ps){
	cout<<"nhap tu/mau so : ";
	is>>ps.tu>>ps.mau;
	return is;
}
ostream& operator<<(ostream& os,PhanSo& ps){
	os<<ps.tu<<" / "<<ps.mau<<endl;
	return os;
}

PhanSo operator+(PhanSo a,PhanSo b){
	return PhanSo(((a.tu*b.mau)+(b.tu*a.mau)),(a.mau*b.mau));
}
PhanSo operator-(PhanSo a,PhanSo b){
	return PhanSo(((a.tu*b.mau)-(b.tu*a.mau)),(a.mau*b.mau));
}
//PhanSo operator+(const PhanSo& a, const PhanSo& b) {
//
//    return PhanSo (a.tu * b.mau + b.tu * a.mau, a.mau * b.mau);
//}

main(){
	PhanSo ps1,ps2(1,2);
	cin>>ps1;
	cout<<ps1;
	cout<<ps2;
	PhanSo ps3(ps1);
	cout<<ps3;
	PhanSo ps4=ps1+ps2;
	cout<<ps4;
	ps4=ps1-ps2;
	cout<<ps4;
	
}
