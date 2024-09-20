#include<bits/stdc++.h>

using namespace std;

class iString{
	public : 
	iString(){
		str="abc";
	}
	iString(string s){
		this->str=s;
	}
	int get_length(){
	    return str.length();
	}
	int compare(iString &s){
//		int n=get_length();
//		int dem=0;
//		for(int i=0;i<n;i++){
//			dem+=str[i];
//		}
//		int n2 = 0;
//	    while(s[n2] != '\0') {
//	        ++n2;
//	    }
//	    int dem2=0;
//	    for(int i=0;i<n2;i++){
//			dem2+=str[i];
//		}
//	    if(dem==dem2) return 0;
//	    if(dem>dem2) return 1;
//	    if(dem<dem2)return -1;
		return str.compare(s.str);
		
	}
	
	void concat(iString &s) {
        str+=s.str;
    }
    
    iString substring(int start, int len)  {
        if (start < 0 || start >= get_length() || len < 0 || start + len > get_length()) {
            return iString("");
        }
        return iString(str.substr(start, len));
    }
    
    void display(){
    	cout<<str;
	}
		
	private :
		string str;
	
};

main(){
	iString str;
	iString();
	cout<<"do dai chuoi : "<<str.get_length()<<endl;
//	cout<<"do dai  : "<<str.test()<<endl;
	iString str2("abd");
//	cout<<"do dai  : "<<str2.test()<<endl;
	cout<<"ss  : "<<str.compare(str2)<<endl;
	cout<<"ss  : "; iString t = str.substring(0,2) ;t.display();cout<<endl;
//	str.test(str2)
}
