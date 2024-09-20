#include<bits/stdc++.h>

using namespace std;

class HocSinh{
	private :
		string ten;
		string lopSinhHoat;
		int dem;
	public :
		HocSinh() {}
		HocSinh(string n,string l,int d) : ten(n) , lopSinhHoat(l) , dem(d) {}
		
		virtual void input(){
			cout<<"nhap ten : ";
			getline(cin,ten);
			cout<<"nhap lop : ";
			getline(cin,lopSinhHoat);
			cout<<"nhap diem : ";
			cin>>dem;
		}
		
		virtual void output(){
			cout<<"ten : "<<ten<<endl;
			cout<<"lop : "<<lopSinhHoat<<endl;
			cout<<"diem : "<<dem<<endl;
		}
		int getdiem(){
			return dem;
		}
		int setdiem(int x){
			return dem=x;
		}
		
		virtual void tangDiem() = 0 ;
};

class nam : public HocSinh {
	private :
		
	public :
		nam() {}
		nam(string n,string l,int d) : HocSinh(n,l,d) {}
		
		void input(){
			cout<<"hoc sinh nam "<<endl;
			HocSinh::input();
		}
		
		void output(){
			cout<<"hoc sinh nam "<<endl;
			HocSinh::output();
		}
		
		void tangDiem(){
			int n=getdiem();
			setdiem(n+2);
			
		}
};

class nu : public HocSinh {
	private :
		
	public :
		void input(){
			cout<<"hoc sinh nu "<<endl;
			HocSinh::input();
		}
		void output(){
			cout<<"hoc sinh nu "<<endl;
			HocSinh::output();
		}
		void tangDiem(){
			int n=getdiem();
			setdiem(n+2);
		}
};

class DanhSach{
	private :
		vector<HocSinh*> list;
	public :
		void input(){
			int n;
			cout<<"nhap so hoc sinh : ";
			cin>>n;
			for(int i=0;i<n;i++){
				int chon;
				cout<<"1.hoc sinh nam || 2.hoc sinh nu ";
				cin>>chon;
				cin.ignore();
				HocSinh* hocsinh;
				if(chon==1){
					hocsinh=new nam();
				}else if(chon==2){
					hocsinh=new nu();
				}else{
					cout<<"nhap lai "<<endl;
					continue;
				}
				hocsinh->input();
				list.push_back(hocsinh);
			}
		}
		
		void output(){
			for(int i=0;i<list.size();i++){
				list[i]->output();
			}
		}
		
		void tangDiem(){
			for(int i=0;i<list.size();i++){
				list[i]->tangDiem();
			}
		}
		
		void xoa(){
			int vt;
			cout<<"nhap vt can xoa : ";
			cin>>vt;
			if(vt<=0 || vt>list.size()+1){
				cout<<"vt khong hop le !";
			}else{
				list.erase(list.begin()+(vt-1));
				cout<<"xoa thanh cong "<<endl;
			}
		}
};

main(){
	DanhSach list;
	list.input();
	cout<<"danh sach truoc khi tang diem "<<endl;
	list.output();
	cout<<"danh sach sau khi tang diem"<<endl;;
	list.tangDiem();
	list.output();
	list.xoa();
	list.output();
	
	
}
