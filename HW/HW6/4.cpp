#include <bits/stdc++.h>

using namespace std;

string* pGetLine() {
    string* line = new string;
    getline(cin, *line);
    return line;
}

int main() {
    cout << "nhap : ";

//    string line = pGetLine();
    
    string* a=pGetLine();
    
//    char* test = new char[line.length() + 1];
//    strcpy(test, line.c_str());

    cout << "tra ve : " << *a << endl;
    
//    delete[] test;

}


