#include <iostream>
#include <limits>

int main() {
    int x;

    while (true) {
        std::cout << "Nhap so nguyen: ";
        std::cin >> x;

        // Ki?m tra n?u nh?p kh�ng ph?i s? nguy�n
        if (std::cin.fail()) {
            std::cin.clear(); // X�a c? l?i
            while (std::cin.get() != '\n'); // �?c v� b? qua t?ng k� t? cho d?n khi g?p k� t? newline
            std::cout << "Ban da nhap chu, vui long nhap lai." << std::endl;
        } else {
            std::cout << "Ban da nhap so, chuong trinh ket thuc." << std::endl;
            break;
        }
    }

    return 0;
}

