#include <iostream>
#include <cctype>  // For islower(), isupper(), tolower(), and toupper()

using namespace std;

int main() {
    char ch;
    cout<<"nhap ki tu : ";
    cin>>ch;

    if(islower(ch)) {
        ch=toupper(ch);
    }
	else if(isupper(ch)) {
        ch=tolower(ch);
    }

    cout<<"KQ : "<<ch<<endl;

}

