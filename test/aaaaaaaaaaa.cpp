#include <iostream>

using namespace std;

class PhanSo {
private:
    int tu, mau;

public:
    PhanSo() {
        tu = 0;
        mau = 1; // Tránh tru?ng h?p m?u s? b?ng 0
    }

    PhanSo(int tu, int mau) {
        this->tu = tu;
        this->mau = mau;
    }

    PhanSo(const PhanSo& a) {
        tu = a.tu;
        mau = a.mau;
    }

    friend istream& operator>>(istream& is, PhanSo& ps);
    friend ostream& operator<<(ostream& os, const PhanSo& ps); // Thêm const d? không thay d?i d?i tu?ng ps
    friend PhanSo operator+(const PhanSo& a, const PhanSo& b); // Thêm const d? không thay d?i d?i tu?ng a và b




};

istream& operator>>(istream& is, PhanSo& ps) {
    cout << "Nhap tu/mau so: ";
    is >> ps.tu >> ps.mau;

    return is;
}

ostream& operator<<(ostream& os, const PhanSo& ps) {
    os << ps.tu << "/" << ps.mau << endl;
    return os;
}

PhanSo operator+(const PhanSo& a, const PhanSo& b) {

    return PhanSo (a.tu * b.mau + b.tu * a.mau, a.mau * b.mau);;
}

int main() {
    PhanSo ps1, ps2(1, 2);
    cin >> ps1;
    cout << ps1;
    cout << ps2;
    PhanSo ps3(ps1);
    cout << ps3;
    return 0;
}

