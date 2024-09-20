#include<bits/stdc++.h>

using namespace std;

class Book{
	private :
		string title,author;
		int publication_year;
	public :
		Book(){
			title="TEST";
			author="test";
			publication_year=2004;
		}
};
class Dog{
	private :
		string name,breed;
		int age;
	public :
		Dog(){
			name="lu";
			breed="co";
			age=1;
		}
		Dog(string name,string breed,int age){
			this->name=name;
			this->breed=breed;
			this->age=age;
		}
		Dog(Dog& d){
			this->name=d.name;
			this->breed=d.breed;
			this->age=d.age;
		}
		
		~Dog(){}
		
		friend istream& operator>>(istream&,Dog&);
		friend ostream& operator<<(ostream&,Dog&);
		friend bool operator==(Dog D1,Dog D2);
		friend bool operator<(Dog D1,Dog D2);
		friend int operator+(Dog D1,Dog D2);
};

istream& operator>>(istream& is,Dog& d){
	cout<<"nhap name : ";
	getline(is,d.name);
	cout<<"nhap breed : ";
	getline(is,d.breed);
	cout<<"nhap age : ";
	is >> d.age;
	is.ignore();
}
ostream& operator<<(ostream& os,Dog& d){
	os << "name : " <<d.name<< " breed : " <<d.breed<< " age : " <<d.age<<endl; 
}

bool operator==(Dog D1,Dog D2){
	if(D1.name==D2.name){
		return 1;
	}
	return 0;
}

bool operator<(Dog D1,Dog D2){
	if(D1.age<D2.age){
		return 1;
	}
	return 0;
}

int operator+(Dog D1,Dog D2){
	return D1.age+D2.age;
}


main(){
	Dog d,d1;
	cin>>d;
	cout<<d;
	cin>>d1;
	cout<<d1;
	if(d==d1){
		cout<<"hai cho co ten giong nhau !"<<endl;
	}else{
		cout<<"hai cho khong co ten giong nhau !"<<endl;
	}
	cout<<"cho 1 nho tuoi hon cho 2 dung hay sai : ";
	if(d<d1){
		cout<<"dung !!"<<endl;
	}else{
		cout<<"sai !!"<<endl;
	}
	cout<<"tong tuoi cau hai chu cho la : "<<d+d1<<endl;
}
