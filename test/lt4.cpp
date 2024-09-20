#include<bits/stdc++.h>

using namespace std;

class ThietBi{
	private :
		string name;
	public :
		ThietBi(){}
		ThietBi(string name) : name(name) {}
		virtual void input(){
			cout<<"nhap ten : ";
			getline(cin,name);
		}
		virtual void output(){
			cout<<"ten : "<<name<<endl;
		}
		virtual void tang() =0;
		virtual bool samsum() =0;
		virtual int nholon() =0;
};

class Samsum : public ThietBi {
	private :
		int congSuat;
	public :
		Samsum(){}
		Samsum(string name,int congSuat) : ThietBi(name) , congSuat(congSuat) {}
		void input(){
			ThietBi::input();
			cout<<"nhap cong suat : ";
			cin>>congSuat;
		}
		void output(){
			ThietBi::output();
			cout<<"cong suat : "<<congSuat<<endl;
		}
		void tang(){
			congSuat+=2;
		}
		bool samsum(){
			return 1;
		}
		int nholon(){
			return congSuat;
		}
		~Samsum(){}
};

class Iphone : public ThietBi {
	private :
		int congManh;
	public :
		Iphone(){}
		Iphone(string name,int congManh) : ThietBi(name) , congManh(congManh) {}
		
		void input(){
			ThietBi::input();
			cout<<"nhaap cong manh : ";
			cin>>congManh;
		}
		void output(){
			ThietBi::output();
			cout<<"cong manh : "<<congManh<<endl;
		}
		void tang(){
			congManh+=4;
		}
		bool samsum(){
			return 0;
		}
		int nholon(){
			return congManh;
		}
		~Iphone(){}
};

class DanhSach{
	private :
		vector<ThietBi*> list;
	public :
		void input(){
			int n;
			cout<<"nhap so luong thiet bi : ";
			cin>>n;
			for(int i=0;i<n;i++){
				char chon;
				do{
					cout<<"1|samsum    2|iphone  :";
					cin>>chon;
					if(chon!='1' && chon!='2'){
						cout<<"nhap sai cu phap xin chon lai !!"<<endl;
					}
				}while(chon!='1' && chon!='2');
				cin.ignore();
				ThietBi* tb;
				if(chon=='1'){
					tb = new Samsum();
				}
				if(chon=='2'){
					tb = new Iphone();
				}
				tb->input();
				list.push_back(tb);
			}
		}
		void output(){
			for(int i=0;i<list.size();i++){
				list[i]->output();
			}
		}
		void tang(){
			for(int i=0;i<list.size();i++){
				list[i]->tang();
			}
		}
		void sx(){
			for(int i=0;i<list.size();i++){
				for(int j=i+1;j<list.size();j++){
					if(!list[i]->samsum() && list[j]->samsum() ){
						swap(list[i],list[j]);
					}
				}
			}
		}
		void nholon(){
			for(int i=0;i<list.size();i++){
				for(int j=i+1;j<list.size();j++){
					if(list[i]->nholon() >= list[j]->nholon()){
						swap(list[i],list[j]);
					}
				}
			}
		}
		
		void xoa(){
			int vt;
			cout<<"nhap vt : ";
			cin>>vt;
			if(vt<1 || vt>=list.size()+1){
				cout<<"vt ko hop le !"<<endl;
			}else{
				cout<<"vt hop le !"<<endl;
				list.erase(list.begin()+(vt-1));
			}
		}
		
		
		
		~DanhSach(){
			for(int i=0;i<list.size();i++){
				delete list[i];
			}
		}
};

main(){
	DanhSach ds;
	ds.input();
	ds.output();
	cout<<"sau khi tang suc manh "<<endl;
	ds.tang();
	ds.output();
	cout<<"sx "<<endl;
	ds.sx();
	ds.output();
	cout<<"nho lon "<<endl;
	ds.nholon();
	ds.output();
	ds.xoa();
	ds.output();
	
}
