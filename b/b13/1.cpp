#include <iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout << " A1" << endl;
    }

};

class B
{
public:
    void print()
    {
        cout << " B" << endl;
    }
};

class C : public A, public B{};

int main()
{

    C c;
    c.print();
}
