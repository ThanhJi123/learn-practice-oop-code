#include<bits/stdc++.h>

using namespace std;

class Person{
	private :
		int age;
		string name;
	public :
		int a=4;
		Person(){
			age=2;
			name="test";
		}
		getAge(){
			return age;
		}
		void eat(){
			cout<<"eat"<<endl;
		}
};

class Student : public Person {
	public :
		void learn(){
//			int a=getAge;
			cout<<"learn"<<a<<endl;
		}
};

main(){
	Person p;
	p.eat();
	Student s;
	s.learn();
	s.eat();
}
