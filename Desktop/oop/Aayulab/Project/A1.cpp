#include <iostream>
using namespace std;

// Base class
class Person
{
public:
    string name;
};

// Derived class
class Student : virtual public Person
{
public:
    void study()
    {
        cout << "Student studies." << endl;
    }
};

// Derived class
class Teacher : virtual public Person
{
public:
    void teach()
    {
        cout << "Teacher teaches." << endl;
    }
};

// Multiple inheritance
class Assistant : public Student, public Teacher
{
public:
    void work()
    {
        cout << "Assistant works." << endl;
    }
};

// Aggregation: Department has-a Person
class Department
{
public:
    Person p;
};

int main()
{
    Assistant a;

    a.name = "Aayushma";
    cout << "Name: " << a.name << endl;

    a.study();
    a.teach();
    a.work();

    Department d;
    d.p.name = "Teacher";

    cout << "Department member: " << d.p.name << endl;

    return 0;
}