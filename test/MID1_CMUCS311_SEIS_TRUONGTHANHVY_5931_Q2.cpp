#include<bits/stdc++.h>

using namespace std;

class Appliance{
	private :
		string brand;
		double power;
	public :
		friend istream& operator>>(istream&,Appliance&);
		friend ostream& operator<<(ostream&,Appliance&);
		friend bool operator>=(Appliance a1,Appliance a2);
};
istream& operator>>(istream& is,Appliance& app){
	cout<<"input brand : ";
	getline(is,app.brand);
	cout<<"input power : ";
	is >> app.power;
	is.ignore();
}
ostream& operator<<(ostream& os,Appliance& app){
	os << "brand : " <<app.brand<< " power : " <<app.power<<endl; 
}
bool operator>=(Appliance a1,Appliance a2){
	if(a1.power>=a2.power){
		return 1;
	}
	return 0;
}

void input(Appliance app[],int n){
	for(int i=0;i<n;i++){
		cout<<"nhap app["<<i+1<<"]"<<endl;
		cin>>app[i];
	}
}
void output(Appliance app[],int n){
		cout<<"_____-----=====Appliances=====-----_____"<<endl;
	for(int i=0;i<n;i++){
		cout<<" app["<<i+1<<"]"<<endl;
		cout<<app[i];
	}
}
void swap(int &a,int &b){
	if(a>=b){
		int nho=a;
		a=b;
		b=nho;
	}
}
void sort(Appliance app[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(app[i]>=app[j]){
				swap(app[i],app[j]);
			}
		}
	}
}

main(){
	Appliance app[100];
	int n;
	cout<<"nhap so phan tu : ";
	cin>>n;
	cin.ignore();
	input(app,n);
	output(app,n);
	sort(app,n);
	output(app,n);
}
