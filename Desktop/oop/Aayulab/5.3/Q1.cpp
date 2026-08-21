#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person Constructor" << endl;
    }

    ~Person() {
        cout << "Person Destructor" << endl;
    }
};

class Employee : public Person {
public:
    Employee() {
        cout << "Employee Constructor" << endl;
    }

    ~Employee() {
        cout << "Employee Destructor" << endl;
    }
};

int main() {
    Employee e;

    return 0;
}