#include <iostream>
using namespace std;

class GrandParent {
public:
    GrandParent() {
        cout << "GrandParent Constructor" << endl;
    }

    ~GrandParent() {
        cout << "GrandParent Destructor" << endl;
    }
};

class Parent : public GrandParent {
public:
    Parent() {
        cout << "Parent Constructor" << endl;
    }

    ~Parent() {
        cout << "Parent Destructor" << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child Constructor" << endl;
    }

    ~Child() {
        cout << "Child Destructor" << endl;
    }
};

int main() {
    Child c;

    return 0;
}