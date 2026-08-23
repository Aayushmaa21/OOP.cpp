#include <iostream>
using namespace std;

class ClassA {
public:
    void display() {
        cout << "Display from Class A" << endl;
    }
};

class ClassB {
public:
    void display() {
        cout << "Display from Class B" << endl;
    }
};

// ClassC inherits from both ClassA and ClassB
class ClassC : public ClassA, public ClassB {
};

int main() {
    ClassC c;

    // obj.display();   //  Ambiguous

    // Solving ambiguity using scope resolution
    c.ClassA::display();
    c.ClassB::display();

    return 0;
}