#include<bits/stdc++.h>

using namespace std;

int maxArr(int arr[],int size){
	int nho = arr[0];
	for(int i = 0 ;i < size ;i++ ){
		if(nho <= arr[i]){
			nho = arr[i];
		}
		
	}
	return nho;
}

main(){
	int arr[] = {1,3,5,7,9};
	int max;
	
	int size = sizeof(arr) / sizeof(arr[0]);
	max=maxArr(arr,size);
	cout<<"max arr : "<<max;
	
	
}
