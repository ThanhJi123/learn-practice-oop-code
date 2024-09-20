#include <iostream>
#include <string>
#include <algorithm> 


std::string addBigNumbers(const std::string& num1, const std::string& num2) {
    const std::string& bigger = (num1.size() >= num2.size()) ? num1 : num2;
    const std::string& smaller = (num1.size() >= num2.size()) ? num2 : num1;

    int carry = 0;
    int sum = 0;
    std::string result;

    for (int i = 0; i < bigger.size(); ++i) {
        int digit1 = (i < num1.size()) ? (bigger[bigger.size() - 1 - i] - '0') : 0;
        int digit2 = (i < num2.size()) ? (smaller[smaller.size() - 1 - i] - '0') : 0;

        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum %= 10;

        result.insert(result.begin(), sum + '0');
    }

    if (carry > 0) {
        result.insert(result.begin(), carry + '0');
    }

    return result;
}

void reverseString(std::string& str) {
    std::reverse(str.begin(), str.end());
}

int main() {
    std::string number1, number2;

    std::cout << "Nh?p s? th? nh?t: ";
    std::cin >> number1;
    std::cout << "Nh?p s? th? hai: ";
    std::cin >> number2;

    reverseString(number1);
    reverseString(number2);

    std::string sum = addBigNumbers(number1, number2);

    std::cout << "T?ng hai s? l?n là: " << sum << std::endl;

    return 0;
}

