
#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual destructor
    virtual ~Shape() {
        cout << "Shape destructor called." << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    ~Rectangle() {
        cout << "Rectangle destructor called." << endl;
    }
};

int main() {
    Shape *ptr = new Rectangle();

    delete ptr;

    return 0;
}
