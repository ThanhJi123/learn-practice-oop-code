#include<bits/stdc++.h>

using namespace std;

class Date{
	public :
		Date(){
			day = 1; month = 1; year = 2000; 
		}
		Date(int day,int month,int year){
			this->day=day;
			this->month=month;
			this->year=year;
		}
		Date(const Date& Dt){
			this->day=Dt.day;
			this->month=Dt.month;
			this->year=Dt.year;
		}
		void getDate(){
			cout<<"Date 'dd/mm/yyyy' :"<<day<<" / "<<month<<" / "<<year<<endl;	
		}
	private :
		int day,month,year;	
};

main(){
	Date Dt1;
	Dt1.getDate();
	Date Dt2(29,9,2004);
	Dt2.getDate();
	Date Dt3(Dt2);
	Dt3.getDate();
}
