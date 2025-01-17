#include <iostream>
#include <string>

using namespace std;

// Hàm nh?p chu?i s? d?ng std::getline d? x? lý kho?ng tr?ng
void inputString(std::string &chuoi) {
    std::cout << "Nh?p chu?i: ";
    getline(cin, chuoi);
}

// Hàm hi?n th? chu?i
void displayString(const std::string &chuoi) {
    std::cout << "Chu?i: " << chuoi << std::endl;
}

int main() {
//    std::string myString;
//
//    // Nh?p chu?i
//    inputString(myString);
//
//    // Hi?n th? chu?i
//    displayString(myString);
    
    string name = "thanh vy";
    cout<<name;

    return 0;
}

