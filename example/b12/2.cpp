#include<bits/stdc++.h>

using namespace std;

class Employee{
//	private :
//		string name;
//		float salary;
	protected :
		string name;
		float salary;
	public :
	void setDetail(string name,float salary){
		this->name=name;
		this->salary=salary;
	}
	string getName(){
		return name;
	}
	void pay(){
		cout<<"pay : "<<salary<<endl;
	}
};

class Worker : public Employee {
	private :
		int level;
	public :
		void doWork(){
			cout<<name<<" level : "<<level;
		}
		void setLevel(int level){
			this->level=level;
		}
		
};

main(){
	Worker w;
	w.setDetail("vy",500);
	cout<<"name : "<<w.getName()<<endl;
	w.pay();
	w.setLevel(10);
	w.doWork();
	
	
}
