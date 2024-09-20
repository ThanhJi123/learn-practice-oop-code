#include<bits/stdc++.h>

using namespace std;

class Time{
	private :
		int  hours, minutes, seconds;
		void updateTime(){
				
			do{
			
				if(seconds>59){
					seconds-=60;
					++minutes;
				}
				if(minutes>59){
					minutes-=60;
					++hours;
				}
				if(hours==0){
					hours==24;
				}
				if(hours>24){
					hours-=24;
				}
				if(seconds<0){
					seconds=60+seconds;
					--minutes;
				}
				if(minutes<0){
					minutes=60+minutes;
					--hours;
				}
				if(hours<0){
					hours=24+hours;
				}
			}while((hours<0 || hours>24) && (minutes<0 || minutes>60) && (seconds<0 || seconds>60));
				
		}
	public :
		Time(int h,int m,int s){
			hours=h;
			minutes=m;
			seconds=s;
			updateTime();
		}
		
		Time add(Time &time){
			return Time((hours+time.hours),(minutes+time.minutes),(seconds+time.seconds));
		}
		Time subtract(Time &time){
			return Time((hours-time.hours),(minutes-time.minutes),(seconds-time.seconds));
		}
		
		void compare(Time &t){
			if(hours==t.hours && minutes==t.minutes && seconds==t.seconds){
				cout<<"hai thoi gian giong nhau !"<<endl;
			}else{
				cout<<"hai thoi gian khac nhau !"<<endl;
			}
		}
		
		void display(){
			cout<<"Time hh:mm:ss >> "<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}	
};

main(){
	Time time1(2,20,40),time2(3,50,10);

	Time time3=time1.add(time2);
	time3.display();
	time3=time1.subtract(time2);
	time3.display();
	time1.compare(time2);
}
