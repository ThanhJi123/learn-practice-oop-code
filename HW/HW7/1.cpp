#include<bits/stdc++.h>

using namespace std;

class Date{
	public : 
	void input(){
		do{
			cout<<"nhap ngay : ";
			cin>>day;
			if(day<=0||day>31){
				cout<<"ngay khong hop le vui long nhap lai !"<<endl;
			}
		}while(day<=0||day>31);
		do{
			cout<<"nhap thang : ";
			cin>>month;
			if(month<=0||month>12){
				cout<<"thang khong hop le vui long nhap lai !"<<endl;
			}
		}while(month<=0||month>12);
		cout<<"nhap nam : ";
		cin>>year;
		while(day>soNgayTrongThang(month,year)){
			cout<<"ngay khong hop trong thang va nam vui long nhap lai !"<<endl;
			input();
		}
	}
	
	void compare(Date &date){
		if(year!=date.year){
			cout<<"khac nam !"<<endl;
			return;
		}
		if(month!=date.month){
			cout<<"khac thang !"<<endl;
			return;
		}
		if(day!=date.day){
			cout<<"khac ngay !"<<endl;
			return;
		}
		cout<<"giong nhau !"<<endl;
	}
	
	void add(int addday){
		day+=addday;
		while(day>soNgayTrongThang(month,year)){
			day-=soNgayTrongThang(month,year);
			month++;
			if(month>12){
				month=1;
				year++;
			}
		}
	}
	
	
	
	void display(){
		cout<<"dd/mm/yyyy : "<<day<<"/"<<month<<"/"<<year<<endl;
	}
	
	void setDay(int d){
		day=d;
	}
    void setMonth(int m){
		month=m;
	}
    void setYear(int y){
		year=y;
	}

    int getDay(){return day;}
    int getMonth(){return month;}
    int getYear(){return year;}
	
	
	
	
	private : 
	int day,month,year;
	
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
	Date date1,date2;
	date1.input();
//	date2.input();
	date1.display();
//	date2.display();
//	date1.compare(date2);
//	date1.add(3);
//	date1.display();
}
