#include<bits/stdc++.h>

using namespace std;

class Tuong{
	private :
		string name;
		int level;
	public :
		Tuong(){}
		Tuong(string name,int level) : name(name) , level(level) {}
		virtual void input(){
			cin.ignore();
			cout<<"nhap ten : ";
			getline(cin,name);
			cout<<"nhap level : ";
			cin>>level;
		}
		virtual void output(){
			cout<<"ten : "<<name<<endl;
			cout<<"level : "<<level<<endl;
		}
		virtual void tangDiem() = 0;
		virtual ~Tuong() {}
		
		friend istream& operator>>(istream&,Tuong&);
		friend ostream& operator<<(ostream&,Tuong&);
		
};
istream& operator>>(istream& is,Tuong& t){
	t.input();
	return is;
}
ostream& operator<<(ostream& os,Tuong& t){
	t.output();
	return os;
}

class VatLy : public Tuong {
	private :
		int congVatLy;
	public :
		VatLy() {}
		VatLy(string name,int level,int congVatLy) : Tuong(name,level) , congVatLy(congVatLy) {}
		void input(){
			Tuong::input();
			cout<<"nhap diem cong vat ly : ";
			cin>>congVatLy;
		}
		void output(){
			Tuong::output();
			cout<<"diem cong vat ly : "<<congVatLy<<endl;
		}
		void tangDiem(){
			congVatLy+=3;
		}
		
		friend istream& operator>>(istream&,VatLy&);
		friend ostream& operator<<(ostream&,VatLy&);
		
		~VatLy() {}
		
};
istream& operator>>(istream& is,VatLy& vl){
	vl.input();
	return is;
}
ostream& operator<<(ostream& os,VatLy& vl){
	vl.output();
	return os;
}

class Phep : public Tuong {
	private :
		int phep;
	public :
		Phep() {}
		Phep(string name,int level,int phep) : Tuong(name,level) , phep(phep) {}
		void input(){
			Tuong::input();
			cout<<"nhap diem cong phep : ";
			cin>>phep;
		}
		void output(){
			Tuong::output();
			cout<<"diem cong phep : "<<phep<<endl;
		}
		void tangDiem(){
			phep+=5;
		}
		
		friend istream& operator>>(istream&,Phep&);
		friend ostream& operator<<(ostream&,Phep&);
		
		~Phep() {}
		
};

istream& operator>>(istream& is,Phep& p){
	p.input();
	return is;
}
ostream& operator<<(ostream& os,Phep& p){
	p.output();
	return os;
}

class DanhSach{
	private :
		vector<Tuong*> list;
	public :
		void input(){
			int n;
			cout<<"nhap so luong : ";
			cin>>n;
			for(int i=0;i<n;i++){
				int chon;
				do{
					cout<<"1|clv  2|p   : ";
					cin>>chon;
					if(chon!=1 && chon!=2){
						cout<<"nhap sai vui long nhap lai !"<<endl;
					}
				}while(chon!=1 && chon!=2 );
				Tuong* tuong;
				if(chon==1){
					tuong = new VatLy();
				}else{
					tuong= new Phep();
				}
//				tuong->input();
				cin>>*tuong;
				list.push_back(tuong);
			}
		}
		void output(){
			for(int i=0;i<list.size();i++){
//				list[i]->output();
				cout<<*list[i];
			}
		}
		void tangDiem(){
			for(int i=0;i<list.size();i++){
				list[i]->tangDiem();
			}
		}
		void xoa(){
			int vt;
			cout<<"nhap vi tri can xoa : ";
			cin>>vt;
			if(vt<1||vt>=list.size()+1){
				cout<<"vi tri ko hop le !"<<endl;
				return;
			}else{
				list.erase(list.begin()+(vt-1));
				cout<<"xoa thanh cong !"<<endl;
				return;
				
			}
		}
		void menu(){
			bool run=true;
			int chon;
			while(run){
				system("cls");
				cout<<"=========================="<<endl;
				cout<<"==         MENU         =="<<endl;
				cout<<"==   1.input            =="<<endl;
				cout<<"==   2.tang suc manh    =="<<endl;
				cout<<"==   3.output           =="<<endl;
				cout<<"==   4.xoa              =="<<endl;
				cout<<"==   5.exit             =="<<endl;
				cout<<"=========================="<<endl;
				cout<<"   nhap su lua chon : ";
				cin>>chon;
				switch(chon){
					case 1 : 
						input();
						system("pause");
						break;
					case 2 : 
						tangDiem();
						cout<<"tang suc manh thanh cong ! "<<endl;
						system("pause");
						break;
					case 3 : 
						output();
						system("pause");
						break;
					case 4 : 
						xoa();
						system("pause");
						break;	
					case 5 : 
						run=false;
//						system("pause");
						break;	
					default : 
						cout<<"try again !"<<endl;
				}
			}
			
		}
		
		~DanhSach(){
			for(int i=0;i<list.size();i++){
				delete list[i];
			}
			list.clear();
		}
};

main(){
	DanhSach list;
	list.menu();
}
