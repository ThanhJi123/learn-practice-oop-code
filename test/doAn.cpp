#include<bits/stdc++.h>

using namespace std;

class Student{
	private :
		string name;
		long long id;
		int dayOfBirth,monthOfBirth,yearOfBirth;
		
	public : 
		friend istream& operator>>(istream&,Student&);
		friend ostream& operator<<(ostream&,Student&);
		long long getId()const{
			return id;
		}
};

bool laNamNhuan(int nam) {
	return ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0));
}
	
int soNgayTrongThang(int thang, int nam) {
	if (thang == 2) {
	    return laNamNhuan(nam) ? 29 : 28;
	} else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
	    return 30;
	} else {
	    return 31;
	}
}

istream& operator>>(istream& is,Student& student){
	cout<<"nhap ten : ";
	is.ignore();
	getline(is,student.name);
	cout<<"nhap id : ";
	is >> student.id;
	cout<<"nhap ngay/thanh/nam sinh (dd/mm/yyyy)"<<endl;
//	is >> student.dayOfBirth >> student.monthOfBirth >> student.yearOfBirth;
	do{
		do{
			cout<<"nhap ngay : ";
			is>>student.dayOfBirth;
			if(student.dayOfBirth<=0||student.dayOfBirth>31){
				cout<<"ngay khong hop le vui long nhap lai !"<<endl;
			}
		}while(student.dayOfBirth<=0||student.dayOfBirth>31);
		do{
			cout<<"nhap thang : ";
			is>>student.monthOfBirth;
			if(student.monthOfBirth<=0||student.monthOfBirth>12){
				cout<<"thang khong hop le vui long nhap lai !"<<endl;
			}
		}while(student.monthOfBirth<=0||student.monthOfBirth>12);
		cout<<"nhap nam : ";
		is>>student.yearOfBirth;
		if(student.dayOfBirth>soNgayTrongThang(student.monthOfBirth,student.yearOfBirth)){
			cout<<"ngay khong hop le trong thang "<<student.monthOfBirth<<" cua nam "<<student.yearOfBirth<<" xin vui long nhap lai !!"<<endl;
		}
	}while(student.dayOfBirth>soNgayTrongThang(student.monthOfBirth,student.yearOfBirth));
	
	return is;
}
ostream& operator<<(ostream& os,Student& student){
	os<<"ten : "<<student.name<<endl;
	os<<"dd/mm/yyyy : "<<student.dayOfBirth<<"/"<<student.monthOfBirth<<"/"<<student.yearOfBirth <<endl;
	os<<"id : "<<student.id<<endl;
	return os;
}

bool checkID(vector<Student> student,long long ID){
	for(int i=0;i<student.size();i++){
		if(student[i].getId()==ID){
			return true;
		}
	}
	return false;
}

void input(vector<Student>* student, int* n) {
    cout << "Nhap so luong hoc sinh : ";
    cin >> *n;
    student->resize(*n);
    
    for (int i = 0; i < *n; i++) {
        cout << "hoc sinh thu  " << i + 1 << ":" << endl;
        bool KtID ;
        do {
             KtID  = false;
            cin >> (*student)[i];
            for (int j = 0; j < i; j++) {
                if ((*student)[i].getId() == (*student)[j].getId()) {
                     KtID  = true;
                    cout << "ID da ton tai hay nhap lai " << endl;
                    break;
                }
            }
        } while ( KtID );
    }
}

void output(vector<Student>* student){
	cout<<"danh sach hoc sinh "<<endl;
	for(int i=0;i<student->size();i++){
		cout<<(*student)[i];
	}
}
void add(vector<Student>* student,int *n){
	cout<<"nhap so hoc sinh can them : ";
	int x,y=*n;
	cin>>x;
	*n+=x;
	student->resize(*n);
	for(int i=y;i<student->size();i++){
		cout<<"nhap hoc sinh can them thu "<<i+1<<endl;
//		cin>>(*student)[i];
		bool KtID ;
        do {
             KtID  = false;
            cin >> (*student)[i];
            for (int j = 0; j < i; j++) {
                if ((*student)[i].getId() == (*student)[j].getId()) {
                     KtID  = true;
                    cout << "ID da ton tai hay nhap lai " << endl;
                    break;
                }
            }
        } while ( KtID );
	}
}

void Delete(vector<Student>& sd,int &n){
	cout<<"nhap id hoc sinh can xoa : ";
	long long ii;
	cin>>ii;
	bool ck=false;
	for(int i=0;i<sd.size();i++){
		if(sd[i].getId()==ii){
			ck=true;
			for(int j=i;j<n-1;j++){
				sd[j]=sd[j+1];
			}
//			sd.erase(sd.begin() + i);
//			sd[i]=sd[i+1];
			--n;
//			sd.resize(n);
//			return;
			break;
		}
	}
	if(ck){
		sd.resize(n);
	}else{
		cout<<"khong ton tai id nay"<<endl;
	}
//	cout<<"khong ton tai id nay"<<endl;
}

void edit(vector<Student>& sd,int n){
	cout<<"nhap id hoc sinh can sua : ";
	long long ii;
	cin>>ii;
	for(int i=0;i<sd.size();i++){
		if(sd[i].getId()==ii){
			cin>>sd[i];
			return;
		}
	}
	cout<<"khong ton tai id nay"<<endl;
}

void search(vector<Student> sd){
	cout<<"nhap id hoc sinh can tim : ";
	long long id;
	cin>>id;
	for(int i=0;i<sd.size();i++){
		if(sd[i].getId()==id){
			cout<<"co hoc sin voi id "<<id<<endl;
			cout<<"thong tin"<<endl;
			cout<<sd[i];
			return;
		}
	}
	cout<<"khong ton tai id nay"<<endl;
}

void sx(vector<Student>& sd){
	for(int i=0;i<sd.size();i++){
		for(int j=i+1;j<sd.size();j++){
			if(sd[i].getId()>=sd[j].getId()){
				Student nho=sd[i];
				sd[i]=sd[j];
				sd[j]=nho;
			}
		}
	}
}

void menu(vector<Student>& sd,int& n){
	bool run=true;
	int chon;
	while(run){
		system("cls");
		cout<<"===============Menu==============="<<endl;
		cout<<"==                              =="<<endl;
		cout<<"==    1.them hoc sinh           =="<<endl;
		cout<<"==    2.xoa hoc sinh            =="<<endl;
		cout<<"==    3.tim kiem hoc sinh       =="<<endl;
		cout<<"==    4.Edit                    =="<<endl;
		cout<<"==    5.sap xep                 =="<<endl;
		cout<<"==    6.danh sach               =="<<endl;
		cout<<"==    0.Exit                    =="<<endl;
		cout<<"==                              =="<<endl;
		cout<<"=================================="<<endl;
		cout<<"         nhap lua chon : ";
		cin>>chon;
		switch(chon){
			case 1 :
				add(&sd,&n);
				system("pause");
				break;
			case 2 :
				Delete(sd,n);
				system("pause");
				break;
			case 3 :
				search(sd);
				system("pause");
				break;
			case 4 :
				edit(sd,n);
				system("pause");
				break;
			case 5 :
				sx(sd);
				system("pause");
				break;
			case 6 :
				output(&sd);
				system("pause");
				break;	
			case 0 :
				run=false;
				break;
			default :
				cout<<"try again"<<endl;	
		}
	}
}

main(){
	int n;
	vector<Student> student;
	input(&student,&n);
//	output(&student);
//	add(&student,&n);
//	output(&student);
//	Delete(student,n);
//	output(&student);
//	edit(student,n);
//	output(&student);
//	sx(student);
//	output(&student);
	menu(student,n);
	
}
