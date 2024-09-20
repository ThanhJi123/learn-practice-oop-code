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
