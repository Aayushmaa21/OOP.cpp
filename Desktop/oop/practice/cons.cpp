#include <iostream>
using namespace std;

class Student
{
    int age;
    string name;

public:
    // Main constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    // Delegating constructor
    Student(string n) : Student(n, 18)
    {
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1("Aayushma", 20);
    Student s2("Ram");

    s1.display();
    s2.display();

    return 0;
}