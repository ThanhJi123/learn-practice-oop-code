#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countWords(string& str) {
    istringstream iss(str);
    string word;
    int wordCount = 0;

    while (iss >> word) {
        ++wordCount;
    }

    return wordCount;
}

int main() {
    string input;
    cout << "nhap chuoi : ";
    getline(cin, input);
    
    int words = countWords(input);
    cout << "so tu trong chuoi : " << words << endl;
    
}

