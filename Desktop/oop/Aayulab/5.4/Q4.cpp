#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "From Class A" << endl;
    }
};

// Virtual inheritance
class B : virtual public A {
};

class C : virtual public A {
};

// D inherits from both B and C
class D : public B, public C {
};

int main() {
    D d;

    d.display();   // No ambiguity

    return 0;
}