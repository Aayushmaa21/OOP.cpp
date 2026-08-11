#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
};

class Student : public Person
{
private:
    int Id;
    float marks;

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter student ID: ";
        cin >> Id;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << Id << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}