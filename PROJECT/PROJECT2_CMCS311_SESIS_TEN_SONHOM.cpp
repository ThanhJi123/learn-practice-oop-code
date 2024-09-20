#include<bits/stdc++.h>

using namespace std;

class Nguoi{
	private :
		string ten;
		int ngay,thang,nam;
		
		bool laNamNhuan(int nam) {
			return ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0));
		}
			
		int soNgayTrongThang(int thang, int nam) {
			if (thang == 2) {
			    return laNamNhuan(nam) ? 29 : 28;
			} else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
			    return 30;
			} else {
			    return 31;
			}
		}

	public :
		virtual void nhap(){
			cout<<"nhap ten : ";
			cin.ignore();
			getline(cin,ten);
			
			cout<<"nhap ngay/thanh/nam sinh (dd/mm/yyyy)"<<endl;
			do{
				do{
					cout<<"nhap ngay : ";
					cin>>ngay;
					if(ngay<=0||ngay>31){
						cout<<"ngay khong hop le vui long nhap lai !"<<endl;
					}
				}while(ngay<=0||ngay>31);
				do{
					cout<<"nhap thang : ";
					cin>>thang;
					if(thang<=0||thang>12){
						cout<<"thang khong hop le vui long nhap lai !"<<endl;
					}
				}while(thang<=0||thang>12);
				cout<<"nhap nam : ";
				cin>>nam;
				if(ngay>soNgayTrongThang(thang,nam)){
					cout<<"ngay khong hop le trong thang "<<thang<<" cua nam "<<nam<<" xin vui long nhap lai !!"<<endl;
				}
			}while(ngay>soNgayTrongThang(thang,nam));
		}
		virtual void xuat(){
			cout<<"ten : "<<ten<<endl;
			cout<<"dd/mm/yyyy : "<<ngay<<"/"<<thang<<"/"<<nam<<endl;
		}
		virtual bool laHocSinh() const = 0;
		virtual long long getID() const = 0;
		
		friend istream& operator>>(istream&,Nguoi&);
		friend ostream& operator<<(ostream&,Nguoi&);
};
istream& operator>>(istream& is,Nguoi& n){
	n.nhap();
	return is;
}
ostream& operator<<(ostream& os,Nguoi& n){
	n.xuat();
	return os;
}

class HocSinh : public Nguoi{
	private :
		long long id;
		string lopSH;
	public :
		
		
		void nhap(){
			Nguoi::nhap();
			cout<<"nhap id : ";
			cin>>id;
			cin.ignore();
			cout<<"nhap lop sinh hoat : ";
			getline(cin,lopSH);
		}
		void xuat(){
			Nguoi::xuat();
			cout<<"id : "<<id<<endl;
			cout<<"lop sinh hoat : "<<lopSH<<endl;
		}
		bool laHocSinh() const override { return true; }
		long long getID() const override { return id; }
		
		friend istream& operator>>(istream&,HocSinh&);
		friend ostream& operator<<(ostream&,HocSinh&);
};
istream& operator>>(istream& is,HocSinh& hs){
	hs.nhap();
	return is;
}
ostream& operator<<(ostream& os,HocSinh& hs){
	hs.xuat();
	return os;
}

class GiangVien : public Nguoi{
	private :
		int luong;
	public :
		void nhap(){
			Nguoi::nhap();
			cout<<"nhap luong : ";
			cin>>luong;
		}
		void xuat(){
			Nguoi::xuat();
			cout<<"luong : "<<luong<<endl;
		}
		bool laHocSinh() const override { return false; }
		long long getID() const override { return -1; }
		
		friend istream& operator>>(istream&,GiangVien&);
		friend ostream& operator<<(ostream&,GiangVien&);
};
istream& operator>>(istream& is,GiangVien& gv){
	gv.nhap();
	return is;
}
ostream& operator<<(ostream& os,GiangVien& gv){
	gv.xuat();
	return os;
}

class List{
	private :
		vector<Nguoi*> list;
	public :
		void nhap(){
			int size;
			cout<<"nhap so nguoi : ";
			cin>>size;
			for(int i=0;i<size;i++){
				int loai=0;
				cout<<"chon loai 1.HS 2.GV : ";
				cin>>loai;
				Nguoi* nguoi;
				if(loai==1){
					nguoi=new HocSinh();
				}else{
					nguoi=new GiangVien();
				}

				if(loai==1){
					bool ktid;
					do{
						ktid=false;
						cin >> *nguoi;
						for(int j=0;j<i;j++){
							if(list[j]->laHocSinh()){
								if(nguoi->getID()==list[j]->getID()){
									ktid=true;
									cout<<"id da ton tai !"<<endl;
									break;
								}
							}
						}
					}while(ktid);
				}
				else{
					cin >> *nguoi;
				}
				list.push_back(nguoi);
			}
		}
		
		void search(){
			if(list.size()==0){
				cout<<"ko the tim kiem khi khong co doi tuong nao !"<<endl;
			}else{
				long long idtim;
				cout<<"nhap id hoc sinh can tim can tim : ";
				cin>>idtim;
				for(int i=0;i<list.size();i++){
					if(list[i]->laHocSinh() && list[i]->getID() == idtim){
						cout<<"co hoc sinh voi "<<idtim<<" thong tin hoc sinh !"<<endl;
						cout<<*list[i];
						return;
					}
				}
				cout<<"khong ton tai hoc sinh voi id "<<idtim<<" nay trong danh sach !"<<endl;
			}
		}
		
		void edit(){
			if(list.size()==0){
				cout<<"ko the sua khi khong co doi tuong nao !"<<endl;
			}else{
				xuat();
				cout<<endl;
				int x;
				cout<<"nhap vi tri can sua : ";
				cin>>x;
				int s=list.size();
				while(x<=0 || x>=s+1){
					cout<<"vt khong hop le vui long nhap lai : ";
					cin>>x;
				}
				for(int i=0;i<list.size();i++){
					if(i==x-1){
						Nguoi* nguoi;
						if(list[i]->laHocSinh()){
							nguoi=new HocSinh();
							bool ktid;
							do{
								ktid=false;
								cin >> *nguoi;
								for(int j=0;j<i;j++){
									if(list[j]->laHocSinh()){
										if(nguoi->getID()==list[j]->getID()){
											ktid=true;
											cout<<"id da ton tai !"<<endl;
											break;
										}
									}
								}
							}while(ktid);
						}else{
							nguoi=new GiangVien();
							cin >> *nguoi;
						}

						delete list[i];
				        list[i] = nguoi;
					}
				}
			}
		}
		
		void xoa(){
			cout<<"nhap id hoc sinh can xoa : ";
			long long x;
			cin>>x;
			for(int i=0;i<list.size();i++){
				if(list[i]->getID()==x){
					list.erase(list.begin() + i);
					cout<<"xoa thanh cong !!"<<endl;
					return ;	
				}
			}
			cout<<"id khong ton tai !"<<endl;
		}
		
		void add(){
			int x=0;
			cout<<"nhap so luong can them : ";
			cin>>x;
			int n = x+list.size();
			for(int i=list.size();i<n;i++){
				int loai=0;
				cout<<"chon loai 1.HS 2.GV : ";
				cin>>loai;
				Nguoi* nguoi;
				if(loai==1){
					nguoi=new HocSinh();
				}else{
					nguoi=new GiangVien();
				}
				if(loai==1){
					bool ktid;
					do{
						ktid=false;
						cin >> *nguoi;
						for(int j=0;j<i;j++){
							if(list[j]->laHocSinh()){
								if(nguoi->getID()==list[j]->getID()){
									ktid=true;
									cout<<"id da ton tai vui long nhap lai !"<<endl;
									break;
								}
							}
						}
					}while(ktid);
				}
				else{
					cin >> *nguoi;
				}
				list.push_back(nguoi);
			}
		}
		
		void sapXep() {
        int n = list.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (!list[j]->laHocSinh() && list[j + 1]->laHocSinh()) {
                    swap(list[j], list[j + 1]);
                }
            }
        }
    }

		
		void xuat(){
			for(int i=0;i<list.size();i++){
				if(list[i]->laHocSinh()){
					cout<<"_____===== hoc sinh =====_____"<<endl;
					cout << *list[i];
				}else{
					cout<<"_____===== giang vien =====_____"<<endl;
					cout << *list[i];
				}
			}
		}
		void xuaths(){
			for(int i=0;i<list.size();i++){
				if(list[i]->laHocSinh()){
					cout<<"_____===== danh sach hoc sinh =====_____"<<endl;
					cout << *list[i];
				}
			}
		}
		void xuatGV(){
			for(int i=0;i<list.size();i++){
				if(!list[i]->laHocSinh()){
					cout<<"_____===== danh sach giang vien =====_____"<<endl;
					cout << *list[i];
				}
			}
		}
		
		void menu(){
			bool run=true;
			int chon;
			while(run){
				system("cls");
				cout<<"===============Menu==============="<<endl;
				cout<<"==                              =="<<endl;
				cout<<"==    1.them hoc sinh           =="<<endl;
				cout<<"==    2.xoa hoc sinh            =="<<endl;
				cout<<"==    3.tim kiem hoc sinh       =="<<endl;
				cout<<"==    4.Edit                    =="<<endl;
				cout<<"==    5.sap xep                 =="<<endl;
				cout<<"==    6.danh sach               =="<<endl;
				cout<<"==    7.in hoc sinh             =="<<endl;
				cout<<"==    8.in giang vien           =="<<endl;
				cout<<"==    0.Exit                    =="<<endl;
				cout<<"==                              =="<<endl;
				cout<<"=================================="<<endl;
				cout<<"         nhap lua chon : ";
				cin>>chon;
				switch(chon){
					case 1 :
						add();
						system("pause");
						break;
					case 2 :
						xoa();
						system("pause");
						break;
					case 3 :
						search();
						system("pause");
						break;
					case 4 :
						edit();
						system("pause");
						break;
					case 5 :
						sapXep();
						system("pause");
						break;
					case 6 :
						xuat();
						system("pause");
						break;	
					case 7 :
						xuaths();
						system("pause");
						break;
					case 8 :
						xuatGV();
						system("pause");
						break;		
					case 0 :
						run=false;
						break;
					default :
						cout<<"try again"<<endl;	
				}
	}
		}
};

main(){
	List list;
	list.nhap();
	list.menu();
}
