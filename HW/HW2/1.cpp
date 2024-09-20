#include<bits/stdc++.h>

using namespace std;

bool check(int year){
	return (year%4 == 0 && year%100 != 0) || (year%400 == 0);
}

int output(int month,int year){
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) return 31;
	if(month == 4 || month == 6 || month == 9 || month == 11) return 30;
	return check(year) ? 29 : 28;
}

main(){
	int day,month,year;
	cout<<"input month/year : ";
	cin>>month>>year;
	while(month<=1 && month>=12){
		cout<<"again month : ";
		cin>>month;
	}
	day=output(month,year);
	cout<<"day : "<<day;
}
