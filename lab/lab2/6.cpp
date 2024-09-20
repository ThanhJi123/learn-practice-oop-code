#include<bits/stdc++.h>

using namespace std;

main(){
	char chuoi1[100]="hello";
	char chuoi2[100]="hi";
	
	cout<<"do dai chuoi 1 : "<<strlen(chuoi1)<<endl;
	
	int kq=strcmp(chuoi1,chuoi2);
    if(kq==0){
        cout<<"Hai chuoi bang nhau."<<endl;
    } else if(kq<0) {
        cout<<"Chuoi thu nhat nho hon chuoi thu hai."<<endl;
    } else {
        cout<<"Chuoi thu nhat lon hon chuoi thu hai."<<endl;
    }
    
    strcat(chuoi1,chuoi2);

    cout<< "noi chuoi : "<<chuoi1<<endl;
	
}
