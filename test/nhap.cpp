#include <iostream>
#include <limits>

int main() {
    int x;

    while (true) {
        std::cout << "Nhap so nguyen: ";
        std::cin >> x;

        // Ki?m tra n?u nh?p không ph?i s? nguyên
        if (std::cin.fail()) {
            std::cin.clear(); // Xóa c? l?i
            while (std::cin.get() != '\n'); // Ð?c và b? qua t?ng ký t? cho d?n khi g?p ký t? newline
            std::cout << "Ban da nhap chu, vui long nhap lai." << std::endl;
        } else {
            std::cout << "Ban da nhap so, chuong trinh ket thuc." << std::endl;
            break;
        }
    }

    return 0;
}

