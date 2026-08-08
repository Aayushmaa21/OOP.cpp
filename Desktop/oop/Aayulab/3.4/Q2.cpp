#include <iostream>
using namespace std;

class Printer;   // Forward declaration

class Box {
private:
    int length=14;
    int breadth=19;
    int height=22;

public:
    friend class Printer;   // Printer is a friend class
};

class Printer {
public:
    void display(Box b) {
        cout << "Length = " << b.length << endl;
        cout << "Breadth = " << b.breadth << endl;
        cout << "Height = " << b.height << endl;
    }
};

int main() {
    Box b;
    Printer p;
    p.display(b);

    return 0;
}