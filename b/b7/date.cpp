#include<bits/stdc++.h>

using namespace std;

class Date{
public:
    void input() {
		cout<<"nhap dd mm yyyy : ";
		cin>>day>>month>>year;
	}
    bool setDate(int day, int month, int year) {
    	
    	if(day>=1 && day<=31 && month>=1 && month<=12 && year>=1){
    		this->day=day;
    		this->month=month;
    		this->year=year;
    		return 1;
		}
		return 0;
		
	}
    void display() {
		cout<<"dd / mm / yyyy :"<<day<<" / "<<month<<" / "<<year;
	}
    int getDay() {
		return day;
	}
    int getMonth() {
		return month;
	}
    int getYear() {
		return year;
	}
private:
    int day, month, year;
};


main(){
	Date date;
	Date* pDT=&date;
	date.input();
	if(date.setDate(pDT->getDay(),pDT->getMonth(),pDT->getYear())){
//		cout<<"done";
		date.display();
	}else{
		cout<<"sai du lieu 'dd / mm / yyyy' !!!";
	}
//	date.setDate(pDT->getDay(),pDT->getMonth(),pDT->getYear())
	
//	date.display();
	
//	Date* pDT=&date;
	
}

