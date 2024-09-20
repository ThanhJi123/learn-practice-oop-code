#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
private:
    string name;
    long long id;
    int dayOfBirth, monthOfBirth, yearOfBirth;
public:
    friend istream& operator>>(istream&, Student&);
    friend ostream& operator<<(ostream&, const Student&);
    long long getId() const { return id; } // Hàm d? l?y ID c?a sinh viên
};

istream& operator>>(istream& is, Student& student) {
    cout << "Nh?p tên: ";
    is.ignore(); // B? qua kı t? xu?ng dòng còn l?i trong b? d?m t? l?n nh?p tru?c
    getline(is, student.name);
    cout << "Nh?p ID: ";
    is >> student.id;
    cout << "Nh?p ngày/tháng/nam sinh (dd/mm/yyyy): ";
    is >> student.dayOfBirth >> student.monthOfBirth >> student.yearOfBirth;
    return is; // Tr? v? lu?ng d?u vào
}

ostream& operator<<(ostream& os, const Student& student) {
    os << "Tên: " << student.name << endl;
    os << "Ngày sinh: " << student.dayOfBirth << "/" << student.monthOfBirth << "/" << student.yearOfBirth << endl;
    os << "ID: " << student.id << endl;
    return os; // Tr? v? lu?ng d?u ra
}

bool checkID(const vector<Student>& students, long long ID) {
    for (size_t i = 0; i < students.size(); ++i) {
        if (students[i].getId() == ID) { // Ki?m tra ID
            return true; // ID dã t?n t?i
        }
    }
    return false; // ID chua t?n t?i
}

void input(vector<Student>& students, int& n) {
    cout << "Nh?p s? lu?ng h?c sinh: ";
    cin >> n;
    students.resize(n);

    for (int i = 0; i < n; ++i) {
        cout << "H?c sinh th? " << i + 1 << endl;

        while (true) {
            cin >> students[i];
            if (!checkID(students, students[i].getId())) { // Ki?m tra n?u ID là duy nh?t
                break; // Thoát vòng l?p n?u ID là duy nh?t
            } else {
                cout << "ID dã t?n t?i, vui lòng nh?p l?i ID khác." << endl;
            }
        }
    }
}

void output(const vector<Student>& students) {
    cout << "Danh sách h?c sinh: " << endl;
    for (size_t i = 0; i < students.size(); ++i) {
        cout << students[i];
    }
    cout << endl;
}

void add(vector<Student>& students, int& n) {
    cout << "Nh?p s? h?c sinh c?n thêm: ";
    int x;
    cin >> x;
    int y = n;
    n += x;
    students.resize(n);
    for (int i = y; i < n; ++i) {
        cout << "Nh?p h?c sinh th? " << i + 1 << endl;
        cin >> students[i];
    }
}

int main() {
    int n;
    vector<Student> students;
    
    input(students, n);
    output(students);
    
    add(students, n);
    output(students);
    
    return 0;
}

