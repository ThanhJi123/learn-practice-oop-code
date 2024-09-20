#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// L?p Person co b?n
class Person {
protected:
    string name;
    string phoneNumber;
    string emailAddress;
public:
    Person(string name = "", string phoneNumber = "", string emailAddress = "") 
        : name(name), phoneNumber(phoneNumber), emailAddress(emailAddress) {}

    virtual void purchase() {
        cout << "Purchase method called for " << name << endl;
    }

    string getName() const { return name; }
};

// L?p Student k? th?a t? Person
class Student : public Person {
private:
    int studentNumber;
    float averageMark;
public:
    Student(string name = "", string phoneNumber = "", string emailAddress = "", int studentNumber = 0, float averageMark = 0.0) 
        : Person(name, phoneNumber, emailAddress), studentNumber(studentNumber), averageMark(averageMark) {}

    void enroll() {
        cout << "Enroll method called for " << name << endl;
    }

    void getSemisar() {
        cout << "GetSemisar method called for " << name << endl;
    }
};

// L?p Professor k? th?a t? Person
class Professor : public Person {
private:
    double salary;
public:
    Professor(string name = "", string phoneNumber = "", string emailAddress = "", double salary = 0.0) 
        : Person(name, phoneNumber, emailAddress), salary(salary) {}
};

// L?p ListofPerson ch?a danh sách các d?i tu?ng Person
class ListofPerson {
private:
    vector<Person*> persons;
public:
    void input(Person* person) {
        persons.push_back(person);
    }

    void output() {
        for (Person* person : persons) {
            cout << "Person: " << person->getName() << endl;
        }
    }

    void sort() {
        std::sort(persons.begin(), persons.end(), [](Person* a, Person* b) {
            return a->getName() < b->getName();
        });
    }
};

int main() {
    ListofPerson list;
    list.input(new Student("Alice", "123456789", "alice@example.com", 1, 90.0));
    list.input(new Professor("Bob", "987654321", "bob@example.com", 5000.0));
    list.input(new Student("Charlie", "456789123", "charlie@example.com", 2, 85.0));

    cout << "Before sorting:" << endl;
    list.output();

    list.sort();

    cout << "After sorting:" << endl;
    list.output();

    return 0;
}

