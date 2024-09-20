#include<bits/stdc++.h>

using namespace std;

class IntArr{
	private :
		int size;
		int arr[100];
	public :
		IntArr(){
			size=0
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
	return arr
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
