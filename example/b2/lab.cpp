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
