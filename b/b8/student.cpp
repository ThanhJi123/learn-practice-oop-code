#include<bits/stdc++.h>

using namespace std;

class student{
	public :
		
		string Check(){
			if(this->GPA<=2.4){
				return "can hoc cai thien !!";
			}
			if(this->GPA>=2.5){
				return "ko can hoc cai thien !!";
			}
		}
		
		student(){
			cout<<"Nhap ten : ";
			getline(cin,name);
			cout<<"MSSV : ";
			cin>>MSSV;
			cout<<"Nhap diem GPA : ";
			cin>>GPA;
		}

		student(string name,long long MSSV,double GPA){
			this->name=name;
			this->MSSV=MSSV;
			this->GPA=GPA;
		}

		student(const student& st){
			this->name=st.name;
			this->MSSV=st.MSSV;
			this->GPA=st.GPA;
		}
		
		

		void getStudent(){
			kq=Check();
			cout<<"Student || name : "<<name<<" || MSSV : "<<MSSV<<" || GPA : "<<GPA<<" || kq : "<<kq<<endl;	
		}
	private :
		string name;
		long long MSSV;
		double GPA;	
		string kq;
};

main(){
	student st;
	st.getStudent();
	

	student st2("test",28211105931,2.2);
	st2.getStudent();
	
	
	student st3(st2);
	st3.getStudent();

}
