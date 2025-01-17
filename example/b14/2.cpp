#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual void input() {}
    virtual void display() {}
    virtual double area() { return 0; }
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w = 0, double h = 0) : width(w), height(h) {}

    void input();
    void display() {
        cout << "Width / Height: " << width << " / " << height << " || "<< area()
		 <<endl;
    }
    double area() {
        return width * height;
    }
};

class Circle: public Shape {
    double radius;
public:
    Circle(double r = 0) : radius(r) {}

    void input();
    void display() {
        cout << "Radius: " << radius << " || " << area() <<endl;
    }
    double area() {
        return 3.14 * radius * radius;
    }
};

void Circle::input() {
    cout << "Enter a Circle:" << endl;
    cout << " + Radius: "; cin >> radius;
}

void Rectangle::input() {
    cout << "Enter a Rectangle: " << endl;
    cout << " + Width: "; cin >> width;
    cout << " + Height: "; cin >> height;
}

class ShapeList {
    Shape** list;
    int size;
public:
    ShapeList();
    void input();
    void display();
    ~ShapeList();
};

ShapeList::ShapeList() : list(NULL), size(0) {}

void ShapeList::input() {
    cout << "Number of shapes: "; cin >> size;
    if (list != NULL)
        delete[] list;
    list = new Shape*[size];
    for (int i = 0; i < size; i++) {
        int type = 0;
        cout << "Choose shape [1]Rectangle/[2]Circle: ";
        cin >> type;
        if (type == 1)
            list[i] = new Rectangle();
        else
            list[i] = new Circle();
        list[i]->input();
    }
}

void ShapeList::display() {
    if (size == 0)
        return;
    for (int i = 0; i < size; i++)
        list[i]->display();
}

ShapeList::~ShapeList() {
    if (list != NULL) {
        for (int i = 0; i < size; i++)
            delete list[i];  // Free individual shapes
        delete[] list;  // Free the list itself
    }
}

int main() {
    ShapeList list;
    list.input();
    cout << endl;
    list.display();
    return 0;
}

