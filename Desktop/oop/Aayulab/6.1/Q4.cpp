
#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() override {
        cout << "Area of Rectangle = "
             << length * width << endl;
    }
};

int main() {
    // Shape s;   // Error: abstract class cannot be instantiated

    Circle c(5);
    Rectangle r(4, 6);

    Shape *ptr;

    ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    return 0;
}
