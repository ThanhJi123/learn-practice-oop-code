#include<bits/stdc++.h>

using namespace std;

void add(int arr[],int &size,int so){
	arr[size]=so;
	size++;
	cout<<"them thanh cong so "<<so<<" vao mang !"<<endl;
}

void insert(int arr[],int &size,int so,int vt){
	if(vt<=0 && vt>size){
		cout<<"vi tri khong hop le !"<<endl;
	}else{
		for(int i=size;i>vt;i--){
			arr[i]=arr[i-1];
		}
		arr[vt]=so;
		size++;
		cout<<"them thanh cong so "<<so<<" va vi tri "<<vt<<" trong mang !"<<endl;
	}
}

void remove(int arr[],int &size,int vt){
	if(vt<=0 && vt>size){
		cout<<"vi tri khong hop le !"<<endl;
	}else{
		for(int i=vt;i<size-1;i++){
			arr[i]=arr[i+1];
		}
		size--;
		cout<<"xoa thanh cong so o vi tri "<<vt<<" trong mang !"<<endl;
	}
	
}

void display(int arr[],int size){
	cout<<"mang : ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

main(){
	int arr[100],size=0;
	add(arr,size,3);
	add(arr,size,4);
	add(arr,size,5);
	add(arr,size,2);
	
	display(arr,size);
	
	insert(arr,size,100,2);
	
	display(arr,size);
	
	remove(arr,size,2);
	
	display(arr,size);
}
