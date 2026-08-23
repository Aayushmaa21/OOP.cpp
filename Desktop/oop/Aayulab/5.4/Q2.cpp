#include <iostream>
using namespace std;

// Person class
class Person {
public:
    string name;
};

// Teacher IS-A Person
class Teacher : public Person {
public:
    string subject;
};

// Department HAS-A Teacher
class Department {
public:
    Teacher t;
};

int main() {
    Department d;

    d.t.name = "Ram";
    d.t.subject = "Math";

    cout << "Teacher Name: " << d.t.name << endl;
    cout << "Subject: " << d.t.subject << endl;

    return 0;}