#include<bits/stdc++.h>

using namespace std;

class Student{
	public :
		
		void input(){
			cout<<"nhap ten : ";
			getline(cin,name);
			cout<<"nhap id : ";
			cin>>id;
			
			bool check=false;
			while(!check){
				do{
				cout<<"nhap ngay sinh : ";
				cin>>birthDay;
				if(birthDay<=0||birthDay>31){
					cout<<"ngay sinh khong hop le vui long nhap lai !"<<endl;
				}
				}while(birthDay<=0||birthDay>31);
				do{
					cout<<"nhap thang sinh : ";
					cin>>birthMonth;
					if(birthMonth<=0||birthMonth>12){
						cout<<"thang sinh khong hop le vui long nhap lai !"<<endl;
					}
				}while(birthMonth<=0||birthMonth>12);
				cout<<"nhap nam sinh: ";
				cin>>birthYear;
				if(birthDay>soNgayTrongThang(birthMonth,birthYear)){
					cout<<"ngay sinh khong hop trong thang va nam vui long nhap lai !"<<endl;
				}else{
					check=true;
				}
			}
			
			cout<<"nhap lop : ";
			cin.ignore();
			getline(cin,className);
		}
		
		void display(){
			cout<<"ten : "<<name<<endl;
			cout<<"id : "<<id<<endl;
			cout<<"birth date dd/mm/yyyy : "<<birthDay<<"/"<<birthMonth<<"/"<<birthYear<<endl;
			cout<<"lop : "<<className<<endl;
		}
		
		
		void setName(string n){
			name=n;
		}
		void setId(long long i){
			id=i;
		}
		void setDay(int d){
			birthDay=d;
		}
	    void setMonth(int m){
			birthMonth=m;
		}
	    void setYear(int y){
			birthYear=y;
		}
		void setClass(string c){
			className=c;
		}
		
		string getName(){return name;}
		long long getId(){return id;}
		int getDay(){return birthDay;}
	    int getMonth(){return birthMonth;}
	    int getYear(){return birthYear;}
	    string getClass(){return className;}
		
		
	private :
		long long id;
		string name;
		int birthDay,birthMonth,birthYear;;
		string className;
		
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
};

main(){
	Student sd;
	sd.input();
	sd.display();
	
}
