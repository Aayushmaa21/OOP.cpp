#include <iostream>
using namespace std;

class Circle {
private:
    float radius;
    float pi=3.14;

public:
    void input() {
        cout << "Enter Radius: ";
        cin >> radius;
    }

    void display() {
        cout << "Area = " <<  pi* radius * radius << endl;
    }
};

int main() {
    Circle *c = new Circle;

    c->input();
    c->display();

    delete c;

    return 0;
}