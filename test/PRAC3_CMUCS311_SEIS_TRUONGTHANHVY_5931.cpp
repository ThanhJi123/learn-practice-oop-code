#include<bits/stdc++.h>

using namespace std;

class Movie{
	private :
		string title, director;
		int release_year;
	public :
		Movie(string t,string d,int r){
			title=t;
			director=d;
			release_year=r;
		}
		
		Movie(const Movie &mv){
			title=mv.title;
			director=mv.director;
			release_year=mv.release_year;
		}
		
		bool checkMovie(){
			if(release_year<=1980){
				return 1;
			}
			return 0;
		}
		
		void doiDaoDien(){
			cout<<"nhap ten dao dien can thay doi : ";
			getline(cin,director);
			cout<<"thay doi thanh cong !"<<endl;
		}
		
		~Movie(){}
		
		friend istream& operator>>(istream&,Movie&);
		friend ostream& operator<<(ostream&,const Movie&);
		friend bool operator==(Movie mv1, Movie mv2);


		
};
istream& operator>>(istream& is, Movie& m) {
	cout<<"nhap title : ";
	getline(cin,m.title);
	cout<<"nhap director : ";
	getline(cin,m.director);
	cout<<"nhap release_year : ";
	is >> m.release_year;
	cin.ignore();
	return is;
}
ostream& operator<<(ostream& os, const Movie& m){
	os << "title : " <<m.title << endl << "director : " << m.director << endl << "release_year : " << m.release_year<<endl;
	return os;
}
bool operator==(Movie mv1, Movie mv2) {
    if(mv1.title==mv2.title){
    	return 1;
	}
	return 0;
}



main(){
	Movie movie1("khong nha khong cua","ji",2004),movie2("khong noi de di","vy",1979);
	cout<<"nhap movie 1 :"<<endl;
	cin>>movie1;
	cout<<"thong tin movie 1 "<<endl;
	cout<<movie1;
	cout<<"thong tin movie 2 "<<endl;
	cout<<movie2;
	if(movie1==movie2){
		cout<<"hai phim giong nhau !"<<endl;
	}else{
		cout<<"hai phim khac nhau !"<<endl;
	}
	if(movie1.checkMovie()){
		cout<<"movie 1 la phim kinh dien !"<<endl;
	}else{
		cout<<"movie 1 khong phai la phim kinh dien !"<<endl;
	}
	if(movie2.checkMovie()){
		cout<<"movie 2 la phim kinh dien !"<<endl;
	}else{
		cout<<"movie 2 khong phai la phim kinh dien !"<<endl;
	}
	movie2.doiDaoDien();
	cout<<movie2;
	
}
