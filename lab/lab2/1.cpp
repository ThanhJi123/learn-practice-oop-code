#include <bits/stdc++.h>


using namespace std;

struct Student{
	string name;
	long long id;
	double cgpa;	
};

void input(Student &student){
	cout<<"nhap ten hoc sinh : ";
	getline(cin,student.name);
	cout<<"nhap id : ";
	cin>>student.id;
	cout<<"nhap cgpa : ";
	cin>>student.cgpa;
}

void display(const Student student){
	cout<<"thong tin hoc sinh"<<endl;
	cout<<"ten : "<<student.name<<endl;
	cout<<"id : "<<student.id<<endl;
	cout<<"cgpa : "<<student.cgpa<<endl;
}

void edit(Student &student){
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout<<"thay doi thong tin hoc sinh"<<endl;
	cout<<"nhap ten : ";
	getline(cin,student.name);
	cout<<"nhap id : ";
	cin>>student.id;
	cout<<"nhap cgpa : ";
	cin>>student.cgpa;
	cout<<"thay doi thanh cong !"<<endl;
}

main(){
	Student student;
	input(student);
	display(student);
	edit(student);
	display(student);
	
}
