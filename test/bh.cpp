#include<iostream>
#include<windows.h>
using namespace std;

void songLD(const string L,int tS,int pD,bool 
cC){
    for(int i=0;i<L.length();i++){
        cout << L[i] << flush;
        Sleep(tS);
    }
    Sleep(pD);
    if(cC){
        cout << endl ;
    }
}
main(){
	songLD("3",0,1000,true);
	songLD("3",0,1000,true);
	songLD("3",0,1000,true);
	songLD("3",0,1000,true);
	songLD("3",0,1000,true);
	songLD("3",0,1000,true);
	songLD("3",0,1000,true);
    songLD("3",0,1000,true);
    songLD("2",0,1000,true);
    songLD("1",0,1000,true);
    songLD("Chua n�i t?i d�ng sai, nhung chuy?n xe d?ng l?i do ch�n anh d?t tr�n phanh",27,120,true);
    songLD("Anh d� kh�ng ng?n ng?i, chia con du?ng l�m hai v� anh nghi l� anh qu�n nhanh",30,40,true);
    songLD("G?p m?t c� g�i m?i, coi l� c? th? gi?i,",40,500,false);
    songLD(" vi?t t�n c? hai l�n tranh ",30,35,false);
}
