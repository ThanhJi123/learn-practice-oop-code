#include <iostream>
#include <string>

using namespace std;

string* pGetLines(int n) {
    string* test = new string[n];

    for (int i = 0; i < n; ++i) {
        getline(cin, test[i]);
    }
    
    return test;
}

int main() {
    int n;
    cout << "nhap n : ";
    cin >> n;
    cin.ignore();

    cout << "nhap chuoi cho " << n << " dong :" << endl;
    string* lines = pGetLines(n);

    cout << "tra ve :" << endl;
    for (int i = 0; i < n; ++i) {
        cout << lines[i] << endl;
    }

    delete[] lines;

}

