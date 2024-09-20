#include<bits/stdc++.h>

using namespace std;

class studentList{
	
	public :
		void input(){
			int n;
			cout<<"nhap so hoc sinh : "<<endl;
			cin>>n;
			this->member=n;
//			cin.ignore();
			students.resize(this->member);
			id.resize(this->member);
//			arr.resize(so);
			for(int i=0;i<students.size();i++){
				cin.ignore();
				cout<<"nhap hoc sinh thu "<<i+1<<" : ";
				getline(cin,students[i]);
				cout<<"nhap id : ";
				cin>>id[i];
//				cin.ignore();
//				cin>>students[i];
			}
		}
		
		void find(){
			cin.ignore();
			string name;
			cout<<"nhap ten hoc sinh can tim : ";
			getline(cin,name);
			for(int i=0;i<students.size();i++){
				if(students[i]==name){
					cout<<"co hoc sinh "<<name<<" trong danh sach voi id la : "<<id[i]<<endl;
					return;
				}
			}
			cout<<"ko co hoc sinh "<<name<<" trong danh sach "<<endl;
		}
		void remove(){
			string name;
			cout<<"nhap ten hoc sinh can xoa : ";
			getline(cin,name);
			bool found = false;
		    for (int i = 0; i < students.size(); i++) {
		        if (students[i] == name) {
		            for (int j = i; j < students.size() - 1; j++) {
		                students[j] = students[j + 1];
		                id[j] = id[j + 1];
		            }
		            this->member--;
		            students.resize(this->member);
		            id.resize(this->member);
		            
		            found = true;
		            cout << "xoa thanh cong hoc sinh " << name << " trong danh sach " << endl;
		        }
		    }
		    
		    if (!found) {
		        cout << "ko co hoc sinh " << name << " trong danh sach " << endl;
		    }
		}
		
		void edit(){
			string name;
			cout<<"nhap ten hoc sinh can thay doi : ";
			getline(cin,name);
			for(int i=0;i<students.size();i++){
				if(students[i]==name){
					cout<<"co hoc sinh "<<name<<" trong danh sach "<<endl;
					cout<<"nhap ten moi : ";
					getline(cin,students[i]);
					cout<<"thay doi thanh cong !"<<endl;
					return;
				}
			}
			cout<<"ko co hoc sinh "<<name<<" trong danh sach "<<endl;
		}
		
		void display(){
			cout<<"danh sach hoc sinh "<<endl;
			for(int i=0;i<students.size();i++){
				cout<<"nhap hoc sinh thu "<<i+1<<" : "<<students[i]<<endl;
				cout<<"id : "<<id[i]<<endl;
			}
		}
		
		
	private :
		vector<string> students;
		vector<long long> id;
		int member;
//		students->resize(nember);
//		arr->resize(so);
};

main(){
	studentList list;
	list.input();
	list.display();
	list.find();
	list.remove();
	list.display();
//	list.edit();
//	list.display();
	
}
