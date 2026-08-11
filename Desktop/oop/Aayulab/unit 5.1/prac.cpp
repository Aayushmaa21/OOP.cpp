#include <iostream>
using namespace std;

// Base class
class Person
{
public:
    string name;

    Person(string n)
    {
        name = n;
    }

    void displayPerson()
    {
        cout << "Person Name: " << name << endl;
    }
};

// Inheritance: Teacher IS-A Person
class Teacher : public Person
{
public:
    string subject;

    Teacher(string n, string s) : Person(n)
    {
        subject = s;
    }

    void displayTeacher()
    {
        cout << "Teacher: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};

// Aggregation: Department HAS-A Teacher
class Department
{
private:
    Teacher* teacher;   // pointer to Teacher

public:
    Department(Teacher* t)
    {
        teacher = t;
    }

    void displayDepartment()
    {
        cout << "Department has teacher: " << teacher->name << endl;
        cout << "Teacher teaches: " << teacher->subject << endl;
    }
};

int main()
{
    // Inheritance
    Teacher t("Ram", "C++");

    cout << "Inheritance (IS-A):" << endl;
    t.displayPerson();
    t.displayTeacher();

    // Aggregation
    Department d(&t);

    cout << "\nAggregation (HAS-A):" << endl;
    d.displayDepartment();

    return 0;
}