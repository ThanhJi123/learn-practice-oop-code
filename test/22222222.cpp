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
    long long getId() const { return id; } // H�m d? l?y ID c?a sinh vi�n
};

istream& operator>>(istream& is, Student& student) {
    cout << "Nh?p t�n: ";
    is.ignore(); // B? qua k� t? xu?ng d�ng c�n l?i trong b? d?m t? l?n nh?p tru?c
    getline(is, student.name);
    cout << "Nh?p ID: ";
    is >> student.id;
    cout << "Nh?p ng�y/th�ng/nam sinh (dd/mm/yyyy): ";
    is >> student.dayOfBirth >> student.monthOfBirth >> student.yearOfBirth;
    return is; // Tr? v? lu?ng d?u v�o
}

ostream& operator<<(ostream& os, const Student& student) {
    os << "T�n: " << student.name << endl;
    os << "Ng�y sinh: " << student.dayOfBirth << "/" << student.monthOfBirth << "/" << student.yearOfBirth << endl;
    os << "ID: " << student.id << endl;
    return os; // Tr? v? lu?ng d?u ra
}

bool checkID(const vector<Student>& students, long long ID) {
    for (size_t i = 0; i < students.size(); ++i) {
        if (students[i].getId() == ID) { // Ki?m tra ID
            return true; // ID d� t?n t?i
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
            if (!checkID(students, students[i].getId())) { // Ki?m tra n?u ID l� duy nh?t
                break; // Tho�t v�ng l?p n?u ID l� duy nh?t
            } else {
                cout << "ID d� t?n t?i, vui l�ng nh?p l?i ID kh�c." << endl;
            }
        }
    }
}

void output(const vector<Student>& students) {
    cout << "Danh s�ch h?c sinh: " << endl;
    for (size_t i = 0; i < students.size(); ++i) {
        cout << students[i];
    }
    cout << endl;
}

void add(vector<Student>& students, int& n) {
    cout << "Nh?p s? h?c sinh c?n th�m: ";
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

