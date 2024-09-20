//                                    	Week 1
//(1) A function to search for an integer in a list of integers. If found the return value of the  function is 1 else return value is -1. Pass the list of integers, length of the array and the key to be  searched as parameters to the function. 
//(2) A function which determines the biggest element in an array of integers. The function returns  this number. Pass the list of integers and length of the array as parameters to the function.
//(3) Write a function which sorts an array of integers in ascending order using bubble sort. The  length of the array and the array are passed as parameters to the function. 
//(4) Define a structure called Rectangle which keeps track of the length and breadth of a  rectangle. Write functions namely input, displayDimensions, displayArea and edit to input the  dimensions of a rectangle, to display the dimensions, to calculate and display the area of a  triangle respectively. Write a main function which defines a variable of type Rectangle. Invoke  these functions in main and observe the result.  

#include <iostream>

using namespace std;

void inPutArr(int arr[],int &length){
	cout<<"Nhap so phan tu : ";
	cin>>length;
	for(int i=0;i<length;i++){
		cout<<"Phan tu thu "<<i+1<<" : ";
		cin>>arr[i];
	}
}

void outPut(int arr[],int length){
	for(int i=0;i<length;i++){
		cout<<arr[i]<<" ";
	}
}

int checkX(int arr[],int length,int x){
	for(int i=0;i<length;i++){
		if(x==arr[i]){
			return 1;
		}
	}
	return -1;
}

int maxArr(int arr[],int length){
	int so=arr[0];
	for(int i=0;i<length;i++){
		if(so<=arr[i]){
			so=arr[i];
		}
	}
	return so;
}

void swap(int &x,int &y){
	int nho;
	if(x>=y){
		nho=x;
		x=y;
		y=nho;
	}
}

void sort(int arr[],int length){
	for(int i=0;i<length;i++){
		for(int j=i+1;j<length;j++){
			if(arr[i]>=arr[j]){
				swap(arr[i],arr[j]);
			}
		}
	}
	cout<<"Mang sao khi sap xep : ";outPut(arr,length);	
}

struct Rectangle{
	float dai;
	float rong;	
};

void inPut(Rectangle &rect){
	cout<<"dai : ";
	cin>>rect.dai;
	cout<<"rong : ";
	cin>>rect.rong;
}

void displayDimensions(Rectangle rect){
	cout<<"dai:"<<rect.dai<<endl;
	cout<<"rong:"<<rect.rong<<endl;
	
}

void displayArea(Rectangle rect){
	cout<<"Area:"<<rect.dai*rect.rong<<endl;
}

void edit(Rectangle &rect){
	int x,y;
	cout<<"Nhap gia tri can thay doi"<<endl;
	cout<<"dai:";
	cin>>x;
	rect.dai=x;
	cout<<"rong:";
	cin>>y;
	rect.rong=y;
}



main(){
	cout<<"-------PHAN 1-------"<<endl;
	int arr[100];
	int x;
	int KQ;
	int max;
	int length;

	inPutArr(arr,length);
	cout<<"Mang : ";
	outPut(arr,length);
	cout<<endl;
	cout<<"Nhap so can tim : ";
	cin>>x;
	KQ=checkX(arr,length,x);
	if(KQ==1){
		cout<<"Co phan tu "<<x<<" trong mang"<<endl;
	}else{
		cout<<"khong co phan tu "<<x<<" trong mang !!!"<<endl;
	}
	max=maxArr(arr,length);
	cout<<"Max mang la : "<<max<<endl;
	sort(arr,length);
	cout<<endl;

	cout<<"-------PHAN 2-------"<<endl;
	Rectangle rect;	

	bool run=true;
	int chon;
	while(run){
		cout<<"----Menu----"<<endl;
		cout<<"1. Input dimensions"<<endl;
		cout<<"2. Display dimensions"<<endl;
		cout<<"3. Display area"<<endl;
		cout<<"4. Edit"<<endl;
		cout<<"0. Exit"<<endl;
		cin>>chon;
		switch(chon){
			case 1 :
				inPut(rect);
				break;
			case 2 :
				displayDimensions(rect);
				break;
			case 3 :
				displayArea(rect);
				break;
			case 4 :
				edit(rect);
				break;	
			case 0 :
				run=false;
				break;
			default :
				cout<<"try again"<<endl;	
		}
	}

}

//                                    	Week 2

//(1) Define a structure to represent a Student. Keep track of name, id and cgpa. Write functions  namely input, display and edit to input details to a Student variable, to display it and to edit it  respectively. Write a main function which defines a student variable. Invoke these functions in  main and observe the result.

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

//(2) Define the same Student structure. Also keep an array to hold 4 Student records. Write  functions namely input, display, arrange and search which inputs records to the array, displays  the array in the order of input, arranges the records in order of id’s and searches for a record  taking id as the key. Provide a suitable menu for this program.

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

//(3) Write a user defined function which determines the length of a given string. The only  parameter to the function is the string. The return value of the function should be the length.  Show the usage of this function in the main. 

#include<bits/stdc++.h>

using namespace std;

void input(string &chuoi){
	cout<<"nhap chuoi : ";
	getline(cin,chuoi);
}
void demchuoi(string chuoi){
	int dem=0;
	for(int i=0;i<chuoi.size();i++){
		dem++;
	}
	cout<<"do dai cua chuoi la "<<dem;
}

main(){
	string chuoi;
	input(chuoi);
	demchuoi(chuoi);
}

//(4) Write a user defined function which concatenates one string to another. Pass the two strings  as parameters to the function. The return value of the function should be the concatenated string.  Show the usage of this function in the main. 

#include<bits/stdc++.h>

using namespace std;

void input(string &chuoi){
	cout<<"nhap chuoi : ";
	getline(cin,chuoi);
}

void noiChuoi(string chuoi1,string chuoi2){
	cout<<"noi chuoi : "<<chuoi1+chuoi2;
}

main(){
	string chuoi1,chuoi2;
	input(chuoi1);
	input(chuoi2);
	noiChuoi(chuoi1,chuoi2);
}

//(5) Write a user defined function which compares 2 strings and determines whether the first one  is greater, smaller or equal to the second string. If they are equal return 0, if first string is greater return 1 and if the first string is lesser return -1. Pass the two strings to be compared as  parameters to the function. . Note:- Comparison has to be done in alphabetical order. Eg:- abc  is smaller than abd, greater than abb and is equal to abc. Show the usage of this function in the  main. 

#include<bits/stdc++.h>

using namespace std;

void input(string &chuoi){
	cout<<"nhap chuoi : ";
	getline(cin,chuoi);
}

int noiChuoi(string chuoi1,string chuoi2){
	int ss=chuoi1.compare(chuoi2);
	if(ss==0){
		return 0;
	}
	if(ss<0){
		return -1;
	}
	if(ss>0){
		return 1;
	}
}

main(){
	string chuoi1,chuoi2;
	input(chuoi1);
	input(chuoi2);
	int kq=noiChuoi(chuoi1,chuoi2);
	cout<<kq;
}

//(6) Write a program which makes use of strlen(), strcmp() and strcat() library functions to  determine the length of a string, compare 2 input strings, concatenate one string to the other  respectively. 

#include<bits/stdc++.h>

using namespace std;

main(){
	char chuoi1[100]="hello";
	char chuoi2[100]="hi";
	
	cout<<"do dai chuoi 1 : "<<strlen(chuoi1)<<endl;
	
	int kq=strcmp(chuoi1,chuoi2);
    if(kq==0){
        cout<<"Hai chuoi bang nhau."<<endl;
    } else if(kq<0) {
        cout<<"Chuoi thu nhat nho hon chuoi thu hai."<<endl;
    } else {
        cout<<"Chuoi thu nhat lon hon chuoi thu hai."<<endl;
    }
    
    strcat(chuoi1,chuoi2);

    cout<< "noi chuoi : "<<chuoi1<<endl;
	
}

//(7) Write a function which sorts an array of strings in ascending order using bubble sort. The  number of strings in the array and the array are passed as parameters to the function. 

#include<bits/stdc++.h>

using namespace std;

void input(string arr[],int n){
	cin.ignore();
	for(int i=0;i<n;i++){
		cout<<"arr["<<i+1<<"] : ";
		getline(cin,arr[i]);
	}
}

void sort(string arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				string nho=arr[i];
				arr[i]=arr[j];
				arr[j]=nho;
			}
		}
	}
}

void display(string arr[],int n){
	cout<<"mang : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

main(){
	int n;
	string arr[100];
	cout<<"nhap so phan tu : ";
	cin>>n;
	input(arr,n);
	display(arr,n);
	sort(arr,n);
	display(arr,n);
	
}

//(8) Write separate functions to swap 2 integers making use of (i) pointer parameters and (ii)  reference parameters. 

#include<bits/stdc++.h>

using namespace std;

void swapReference(int &a,int &b){
	int nho=a;
	a=b;
	b=nho;
}
void swpaPointer(int *a,int *b){
	int nho=*a;
	*a=*b;
	*b=nho;
}

main(){
	int a=5,b=10;
	swpaPointer(&a,&b);
	cout<<a<<b;
}

//(9) Write an overloaded function called computeArea which is used to compute the area of a  triangle, a rectangle and a circle, respectively. Show the invocation of these functions in the  main. 

#include<bits/stdc++.h>

using namespace std;

double dienTich(double a,double h){
	return (a*h)/2;
}
double dienTich(double d,double r){
	return d*r;
}
double dienTich(double r){
	return 3.14*r*r;
}

main(){
	
}

//                                    	Week 3

//1a. Define a class to represent a complex number called Complex. Provide the following  member functions:- 
//1. To assign initial values to the Complex object. 
//2. To display a complex number in a+ib format. 
//3. To add 2 complex numbers. (the return value should be complex) 
//4. To subtract 2 complex numbers 
//Write a main function to test the class. 

#include<bits/stdc++.h>

using namespace std;

class Complex{
	private :
		double real;
    	double imag;
    public :
    	Complex(double r,double i){
    		real=r;
    		imag=i;
		}
		void display(){
			cout<<"Complex : "<<real<<"+i"<<imag<<endl;
		}
		Complex add(Complex &complex){
			return Complex((real+complex.real),(imag+complex.imag));
		}
		Complex subtract(Complex &complex){
			return Complex((real-complex.real),(imag-complex.imag));
		}
	
};

main(){
	Complex complex1(1,2),complex2(1,2);
	complex1.display();
	complex2.display();
	
	Complex c3 = complex1.add(complex2);
	cout<<"add ";c3.display();
	
	Complex c4 = complex1.subtract(complex2);
	cout<<"subtract ";c4.display();
	
}

//2. Create a class called Time that has data members to represent hours, minutes and seconds.  Provide the following member functions:- 
//1. To assign initial values to the Time object. 
//2. To display a Time object in the form of hh:mm:ss {0 to 24 hours} 
//3. To add 2 Time objects (the return value should be a Time object) 
//4. To subtract 2 Time objects (the return value should be a Time object) 
//5. To compare 2 time objects and to determine if they are equal or if the first is greater or  smaller than the second one.

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

//3a. Define a class named Movie. Include private fields for the title, year, and name of the  director. Include three public functions with the prototypes 
//void Movie::setTitle(char [ ]); 
//void Movie::setYear(int); 
//void Movie::setDirector(char [ ]); 
//Include another function that displays all the information about a Movie. 
//3b. Include a function which accepts 2 objects of type Movie and displays whether or not they  were released in the same year and also whether the Directors are same. String functions may be  used. 

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

//                                    	Week 4

//1. Create 2 classes namely Rectangle and Circle with suitable data members. Provide member  functions namely input and display to these classes. Function input is for inputting the  dimensions and calculating the area. The area should be stored along with the input data  members. Function display is for displaying the dimensions as well as area. Write a friend  function (called larger) of class Rectangle and class Circle which compares the areas of the  rectangle object with a circle object and displays which one is greater. 

#include<bits/stdc++.h>

using namespace std;

class Circle;

class Rectangle{
	private :
		double dai,rong,dienTich;
	public :
		void input(){
			cout<<"nhap chieu dai : ";
			cin>>dai;
			cout<<"nhap chieu rong : ";
			cin>>rong;
			dienTich=dai*rong;
		}
		void display(){
			cout<<"Rectangle || chieu dai : "<<dai<<" chieu rong : "<<rong<<" dien tich hinh : "<<dienTich<<endl;
		}
		friend void larger(Rectangle &r,Circle &c);
};

class Circle{
	private :
		double banKinh,pi=3.14,dienTich;
	public :
		void input(){
			cout<<"nhap ban kinh : ";
			cin>>banKinh;
			dienTich=pi*banKinh*banKinh;
		}
		void display(){
			cout<<"Circle || ban kinh : "<<banKinh<<" dien tich hinh : "<<dienTich<<endl;
		}
		friend void larger(Rectangle &r,Circle &c);
};

void larger(Rectangle &r,Circle &c){
	if(r.dienTich>c.dienTich){
		cout<<"dien tich Rectangle > Circle !"<<endl;
	}else if(r.dienTich<c.dienTich){
		cout<<"dien tich Rectangle < Circle !"<<endl;
	}else{
		cout<<"dien tich Rectangle = Circle !"<<endl;
	}
}

main(){
	Rectangle r;
	Circle c;
	
	r.input();
	r.display();
	
	c.input();
	c.display();
	
	larger(r,c);
	
}

//2. Modify the above program by using friend class. Make function larger as a member function  of class Circle and make class Circle as a friend of class Rectangle. 

#include<bits/stdc++.h>

using namespace std;

class Circle;

class Rectangle{
	private :
		double dai,rong,dienTich;
	public :
		void input(){
			cout<<"nhap chieu dai : ";
			cin>>dai;
			cout<<"nhap chieu rong : ";
			cin>>rong;
			dienTich=dai*rong;
		}
		void display(){
			cout<<"Rectangle || chieu dai : "<<dai<<" chieu rong : "<<rong<<" dien tich hinh : "<<dienTich<<endl;
		}
		friend class Circle;
};

class Circle{
	private :
		double banKinh,pi=3.14,dienTich;
	public :
		void input(){
			cout<<"nhap ban kinh : ";
			cin>>banKinh;
			dienTich=pi*banKinh*banKinh;
		}
		void display(){
			cout<<"Circle || ban kinh : "<<banKinh<<" dien tich hinh : "<<dienTich<<endl;
		}
		void larger(Rectangle &r){
			if(r.dienTich>dienTich){
				cout<<"dien tich Rectangle > Circle !"<<endl;
			}else if(r.dienTich<dienTich){
				cout<<"dien tich Rectangle < Circle !"<<endl;
			}else{
				cout<<"dien tich Rectangle = Circle !"<<endl;
			}
		}
};


main(){
	Rectangle r;
	Circle c;
	
	r.input();
	r.display();
	
	c.input();
	c.display();
	
	c.larger(r);
	
}

//3. Create a class called Counter that contains a static data member to count the number of  Counter objects being created. Also define a static member function called showCount() which  displays the number of objects created at any given point of time. Illustrate this. 

#include<bits/stdc++.h>

using namespace std;

class Counter{
	private :
		static int count;
	public :
		Counter(){
			count++;
		}
		static void showCount(){
			cout<<"so luong doi tuong duoc khoi tao la : "<<count<<endl;
		}
};
int Counter::count = 0;
main(){
	Counter c1;
	Counter::showCount();
	Counter c2;
	Counter::showCount();
}

//4. Define a class called Customer that holds private fields for a customer ID number, name and  credit limit. Include public functions that set each of the three fields and also for displaying a  customer’s data. Write a main() function that declares an array of 5 Customer objects. Prompt  the user for values for each Customer, and display all 5 Customer objects. 

#include<bits/stdc++.h>

using namespace std;

class Customer{
	private :
		int id;
		string name;
		double creditLimit;
	public :
		void input(){
			cout<<"nhap id : ";
			cin>>id;
			
			cin.ignore();
			
			cout<<"nhap ten : ";
			getline(cin,name);
			
			cout<<"nhap credit limit : ";
			cin>>creditLimit;
		}
		
		void display(){
			cout<<"id : "<<id<<endl;
			cout<<"name : "<<name<<endl;
			cout<<"credie limit : "<<creditLimit<<endl;
		}
};

main(){
	Customer c[5];
	for(int i=0;i<5;i++){
		cout<<"customer ["<<i+1<<"]"<<endl;
		c[i].input();
	}
	for(int i=0;i<5;i++){
		cout<<"customer ["<<i+1<<"]"<<endl;
		c[i].display();
	}
}

//                                    	Week 5

//1. Consider the already defined Complex class. Provide a default constructor, a parameterized
//constructor and a copy constructor to this class. Also provide a display function. Illustrate all the
//constructors as well as the display method by defining Complex objects.

#include<bits/stdc++.h>

using namespace std;

class Complex{
	private :
		double real,imag;
	public :
		Complex(){
			real=0;
			imag=0;
		}
		Complex(double real,double imag){
			this->real=real;
			this->imag=imag;
		}
		Complex(Complex &c){
			this->real=c.real;
			this->imag=c.imag;
		}
		void display(){
			cout<<"complex : "<<real<<" + "<<imag<<"i"<<endl;
		}
};

main(){
	Complex c1,c2(1,1),c3(c2);
	c1.display();
	c2.display();
	c3.display();
}

//2. Consider the already defined Time class. Provide a default constructor, a parameterized
//constructor and a copy constructor to this class. Also provide a display function. Illustrate all the constructors as well as the display method by defining Time objects.

#include<bits/stdc++.h>

using namespace std;

class Time{
	private :
		int h,m,s;
	public :
		Time(){
			h=0;
			m=0;
			s=0;
		}
		Time(int h,int m,int s){
			this->h=h;
			this->m=m;
			this->s=s;
		}
		Time(Time &t){
			this->h=t.h;
			this->m=t.m;
			this->s=t.s;
		}
		void display(){
			cout<<"time || hh:mm:ss : "<<h<<":"<<m<<":"<<s<<endl;
		}
};

main(){
	Time t1,t2(9,9,9),t3(t2);
	t1.display();
	t2.display();
	t3.display();
}

//3. Define a class to represent a Bank account. Include the following members.
//Data members:-
//1. Name of the depositor
//2. Account number.
//3. Type of account.
//4. Balance amount in the account.
//5. Rate of interest (static data)
//Provide a default constructor, a parameterized constructor and a copy constructor to this class.
//Also provide Member Functions:-
//1. To deposit amount.
//2. To withdraw amount after checking for minimum balance.
//3. To display all the details of an account holder.
//4. Display rate of interest (a static function)
//Illustrate all the constructors as well as all the methods by defining objects.
//(Dynamic memory allocation, destructors)


#include<bits/stdc++.h>

using namespace std;

class bankAccount{
	private :
		string name;
		long long accountNumber;
		string type;
		long long balanceAmount;
		static double rateOfInterest;
	public :
		bankAccount(){
			name="thanh vy";
			accountNumber=123456789;
			type="Savings";
			balanceAmount=500000;
		}
		bankAccount(string name,long long accountNumber,string type,long long balanceAmount){
			this->name=name;
			this->accountNumber=accountNumber;
			this->type=type;
			this->balanceAmount=balanceAmount;
		}
		bankAccount(bankAccount &ba){
			this->name=ba.name;
			this->accountNumber=ba.accountNumber;
			this->type=ba.type;
			this->balanceAmount=ba.balanceAmount;
		}
		
		~bankAccount(){
		}
		
		void deposit(long long tien){
			balanceAmount+=tien;
		}
		void withdraw(long long tien){
			if(balanceAmount>=tien){
				balanceAmount-=tien;
				return;
			}
			cout<<"khong du de rut !"<<endl;
		}
		
		void display(){
			cout<<"name : "<<name<<endl;
			cout<<"account number : "<<accountNumber<<endl;
			cout<<"type : "<<type<<endl;
			cout<<"balance amount : "<<balanceAmount<<endl;
		}
		static void displayRateOfInterest(){
			cout<<"rate of interest : "<<rateOfInterest<<" %"<<endl;
		}
};

double bankAccount::rateOfInterest=5.0;

main(){
	bankAccount ba1,ba2("thanh ji",012345,"Savings",200000),ba3(ba2);
	ba1.display();
	ba1.displayRateOfInterest();
	ba2.display();
	ba3.display();
	
	ba1.deposit(100000);
	ba1.display();
	ba1.withdraw(300000);
	ba1.display();
}


//1. Define a class IntArr which hosts an array of integers. Provide the following
//member functions:-
//1. A default constructor.
//2. A parameterized constructor which initializes the array of the object.
//3. A copy constructor.
//4. A function called display to display the array contents.
//5. A function called search to search for an element in the array.
//6. A function called compare which compares 2 IntArr objects for equality.

#include<bits/stdc++.h>

using namespace std;

class IntArr{
	private :
		int arr[100];
		int n;
	public :
		IntArr(){
			arr[0]=1;
			arr[1]=2;
			arr[2]=3;
			n=3;
		}
		
		IntArr(int a[],int size){
			for(int i=0;i<size;i++){
				arr[i]=a[i];
			}
			n=size;
		}
		IntArr(IntArr &a){
			for(int i=0;i<a.n;i++){
				arr[i]=a.arr[i];
			}
			this->n=a.n;
		}
		
		void search(int x){
			for(int i=0;i<n;i++){
				if(arr[i]==x){
					cout<<"co phan tu trong mang !"<<endl;
					return;
				}
			}
			cout<<"khong co phan tu trong mang !"<<endl;
		}
		
		void compare(IntArr &a){
			if(n==a.n){
				cout<<"2 mang co cung kich thuoc !"<<endl;
				return;
			}
			cout<<"2 mang khong co cung kich thuoc !"<<endl;
		}
		
		void display(){
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}	
};

main(){
	IntArr ia;
	ia.display();
	int a[3]={2,3,4};
	IntArr ia2(a,3);
	ia2.display();
	IntArr ia3(ia2);
	ia3.display();
	ia3.search(4);
	ia3.compare(ia2);
}

//2. Create a class called String which consists of only one data member which is a character
//pointer. Provide the following member functions to this class:-
//
//1. A default constructor which initializes the pointer to null value.
//2. A parameterized constructor which receives a string as its parameter. {Note:-
//memory allocation to be done}
//3. A copy constructor which receives a string as its parameter. {Note:- memory
//allocation to be done}
//4. A display function to display the string object.
//5. A destructor to deallocate the memory which was allocated dynamically.
//6. ChangeCase, which converts all lower case to upper case and vice versa.

#include <iostream>
#include <cstring>
using namespace std;

class String {
	private:
    	char *str;

	public:
    	String(){
			str="hello";
		}


    	String(const char *s) {
        	str = new char[strlen(s) + 1];
        	strcpy(str, s);
    	}

	    String(const String &other) {
	        str = new char[strlen(other.str) + 1];
	        strcpy(str, other.str);
	    }

	    ~String() {
	        delete[] str;
	    }

	    void display() const {
	        cout << str << endl;

	    }


	    void changeCase() {
	        if (str) {
	            for (int i = 0; str[i] != '\0'; i++) {
	                if (islower(str[i])) {
	                    str[i] = toupper(str[i]);
	                } else if (isupper(str[i])) {
	                    str[i] = tolower(str[i]);
	                }
	            }
	        }
	    }

	    void reverse() {
	        if (str) {
	            int len = strlen(str);
	            for (int i = 0; i < len / 2; i++) {
	                swap(str[i], str[len - i - 1]);
	            }
	        }
	    }
};

int main() {

    String str1;
    str1.display();


    String str2("Hello World!");
    str2.display();


    String str3(str2);
    str3.display();


    str2.changeCase();
    str2.display();


    str2.reverse();
    str2.display();

}

//                                    	Week 6

//1. Continue question 1 of Week 7 
//1. Overload + operator to add 2 IntArr objects. .
//2. Overload “= =” to compare for equality of 2 objects. 
//3. Overload “[ ]” to retrieve an integer from the specified index. 
//4. Overload input output operators for this class

#include<bits/stdc++.h>

using namespace std;

class IntArr{
	private :
		int size;
		int arr[100];
	public :
		IntArr(){
			size=0;
		}
		IntArr(int x){
			size=x;
		}
		
		friend istream& operator>>(istream&,IntArr&);
		friend ostream& operator<<(ostream&,IntArr&);
		friend IntArr operator+(IntArr a,IntArr b);
};

istream& operator>>(istream& is,IntArr& arr){
	for(int i=0;i<arr.size;i++){
		is >> arr.arr[i];
	}
	return is;
}

ostream& operator<<(ostream& os,IntArr& arr){
	for(int i=0;i<arr.size;i++){
		os << arr.arr[i] << "  ";
	}
	return os;
}
IntArr operator+(IntArr a,IntArr b){
	IntArr arr(a.size);
	for(int i=0;i<a.size;i++){
		arr.arr[i]=a.arr[i]+b.arr[i];
	}
	return arr;
}

main(){
	
	int x,y;
	cout<<"nhap x,y : ";
	cin>>x>>y;
	IntArr a1(x),a2(y),a3;
	cout<<"nhap mang 1 : ";cin>>a1;
	cout<<"nhap mang 2 : ";cin>>a2;
	cout<<"xuat mang 1 : ";cout<<a1;
	cout<<"xuat mang 2 : ";cout<<a2;
	
	if(x==y){
		a3=a1+a2;
		cout<<"xuat mang 3 : ";cout<<a3;
	}else{
		cout<<"ko the cong khi so luong phan tu ko giong nhau !";
	}
	
}

//2. Continue question 2 of Week 7 
//1. Overload + operator to concatenate 2 string objects. {Note:- proper memory  allocation to be done} 
//2. Overload input and output operators. 
//3. Overload “[ ]” to retrieve a character from the specified index 

#include<bits/stdc++.h>

using namespace std;

class String{
	private :
		string s;
	public :
		String(){
			s="";
		}
		String(string s){
			this->s=s;
		}
		
		friend istream& operator>>(istream&,String&);
		friend ostream& operator<<(ostream&,String&);
		friend String operator+(String a,String b);
};

istream& operator>>(istream& is,String& s){
	getline(is,s.s);
	return is;
}

ostream& operator<<(ostream& os,String& s){
	os<<s.s<<endl;
	return os;
}
String operator+(String a,String b){
	
	return String(a.s+b.s);
}

main(){
	
	String s1,s2("llo");
	cin>>s1;
	cout<<s1;
	cout<<s2;
	String s3=s1+s2;
	cout<<s3;
	
}

//3. Continue question 1 of Week 8 
//1. Overload input output operators to read and display a Matrix object. 
//2. Overload + and – operators to add and subtract 2 matrices and to hold the result in  a third matrix. 

#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    int arr[100][100];
    int rows, cols;

public:
	Matrix(int r, int c){
		rows=r;
		cols=c;
	}

    friend istream& operator>>(istream&, Matrix&);
    
    friend ostream& operator<<(ostream&, Matrix&);
    
    friend Matrix operator+(Matrix m1,Matrix m2);

};
    istream& operator>>(istream& in, Matrix& matrix) {

        for (int i = 0; i < matrix.rows; ++i) {
            for (int j = 0; j < matrix.cols; ++j) {
                in >> matrix.arr[i][j];
            }
        }
        return in;
    }
    
ostream& operator<<(ostream& out, Matrix& matrix) {
    for (int i = 0; i < matrix.rows; ++i) {
        for (int j = 0; j < matrix.cols; ++j) {
            out << matrix.arr[i][j] << " ";
        }
        out << endl;
    }
    return out;
}   

Matrix operator+(Matrix m1,Matrix m2) {
        Matrix result(m1.rows,m1.cols);
        for (int i = 0; i < m1.rows; ++i) {
            for (int j = 0; j < m1.cols; ++j) {
                result.arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
            }
        }
        return result;
    } 

int main() {
    int rows=3, cols=3;
    
Matrix mat1(rows,cols),mat2(rows,cols);
    cout << "nhap ma tra 1 : " << endl;
    cin >> mat1;
    cout << "nhap ma tra 2 : " << endl;
    cin>>mat2;
    
    Matrix mat3 = mat1 + mat2;
    cout << "tong 2 ma tra : " << endl;
    cout<<mat3;

}




