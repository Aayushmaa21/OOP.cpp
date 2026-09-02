#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void display() {
        cout << "This is a Shape." << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    void display() override {
        cout << "This is a Rectangle." << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void display() override {
        cout << "This is a Circle." << endl;
    }
};

int main() {
    Shape *s;

    Rectangle r;
    Circle c;

    // Base class pointer pointing to Rectangle
    s = &r;
    s->display();

    // Base class pointer pointing to Circle
    s = &c;
    s->display();

    return 0;
}