#include<bits/stdc++.h>

using namespace std;

class IntArr{
	private :
		int arr[100];
		int n;
	public :
		IntArr(){
			arr[0]=1;
			arr[1]=2;
			arr[2]=3;
			n=3;
		}
		
		IntArr(int a[],int size){
			for(int i=0;i<size;i++){
				arr[i]=a[i];
			}
			n=size;
		}
		IntArr(IntArr &a){
			for(int i=0;i<a.n;i++){
				arr[i]=a.arr[i];
			}
			this->n=a.n;
		}
		
		void search(int x){
			for(int i=0;i<n;i++){
				if(arr[i]==x){
					cout<<"co phan tu trong mang !"<<endl;
					return;
				}
			}
			cout<<"khong co phan tu trong mang !"<<endl;
		}
		
		void compare(IntArr &a){
			if(n==a.n){
				cout<<"2 mang co cung kich thuoc !"<<endl;
				return;
			}
			cout<<"2 mang khong co cung kich thuoc !"<<endl;
		}
		
		void display(){
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}	
};

main(){
	IntArr ia;
	ia.display();
	int a[3]={2,3,4};
	IntArr ia2(a,3);
	ia2.display();
	IntArr ia3(ia2);
	ia3.display();
	ia3.search(4);
	ia3.compare(ia2);
}
