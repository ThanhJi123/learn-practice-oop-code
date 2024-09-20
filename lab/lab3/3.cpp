#include<bits/stdc++.h>

using namespace std;

class Movie{
	private :
		char title[100],director[100];
		int year;
	public :
		void setTitle(char t[]){
			strcpy(title,t);
		}
		void setDirector(char d[]){
			strcpy(director,d);
		}
		void setYear(int y){
			year=y;
		}
		void display(){
			cout<<"title : "<<title<<endl;
			cout<<"director : "<<director<<endl;
			cout<<"year : "<<year<<endl;
		}
		void compare(Movie &m2){
			if(year==m2.year){
				cout<<"cung nam phat hanh !"<<endl;
			}else{
				cout<<"khong cung nam phat hanh !"<<endl;
			}
			if(strcmp(director,m2.director)==0){
				cout<<"cung mot dao dien !"<<endl;
			}else{
				cout<<"khong cung mot dao dien !"<<endl;
			}
		}
};

main(){
	Movie movie1,movie2;
	movie1.setTitle("test");
	movie1.setDirector("test");
	movie1.setYear(2004);
	movie1.display();
	movie2.setTitle("test");
	movie2.setDirector("test");
	movie2.setYear(2004);
	movie2.display();
	movie1.compare(movie2);
}
