#include <bits/stdc++.h>

using namespace std;

struct Student{
	string name;
	long long id;
	double cgpa;	
};

void input(Student student[],int size){
	for(int i=0;i<size;i++){
		cout<<"hoc sinh thu "<<i+1<<endl;
		if(i>0){
			cin.ignore(numeric_limits<streamsize>::max(), '\n');	
		}
		cout<<"nhap ten hoc sinh : ";
		getline(cin,student[i].name);
		cout<<"nhap id : ";
		cin>>student[i].id;
		cout<<"nhap cgpa : ";
		cin>>student[i].cgpa;
	}	
}

void arrangeID(Student students[], int size) {
    for(int i=0;i<size;i++) {
        for(int j=i+1;j<size;j++) {
            if (students[i].id > students[j].id) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void searchID(const Student student[], int size, long long id) {
    for (int i = 0; i < size; i++) {
        if (student[i].id == id) {
            cout<<"co hoc sinh voi id "<<student[i].id<<endl;
            cout<<"ten : "<<student[i].name<<endl;
            cout<<"cgpa : "<<student[i].cgpa<<endl;
        }
    }
    return;
    cout<<"khong co hoc sinh voi id "<<id<<endl;
}

void display(const Student student[],int size){
	for(int i=0;i<size;i++){
		cout<<"thong tin hoc sinh thu "<<i+1<<endl;
		cout<<"ten : "<<student[i].name<<endl;
		cout<<"id : "<<student[i].id<<endl;
		cout<<"cgpa : "<<student[i].cgpa<<endl;
	}
		
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
	int size=4;
	Student student[size];
	input(student,size);
	display(student,size);
	arrangeID(student,size);
	display(student,size);
	long long id;
	cout<<"id : ";
	cin>>id;
	searchID(student,size,id);
	
}
