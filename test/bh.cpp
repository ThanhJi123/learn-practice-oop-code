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
    songLD("Chua nói t?i dúng sai, nhung chuy?n xe d?ng l?i do chân anh d?t trên phanh",27,120,true);
    songLD("Anh dã không ng?n ng?i, chia con du?ng làm hai vì anh nghi là anh quên nhanh",30,40,true);
    songLD("G?p m?t cô gái m?i, coi là c? th? gi?i,",40,500,false);
    songLD(" vi?t tên c? hai lên tranh ",30,35,false);
}
