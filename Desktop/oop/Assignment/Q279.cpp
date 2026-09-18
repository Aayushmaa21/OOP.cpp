#include <iostream>
using namespace std;

class Staff
{
protected:
    int code;
    string name;

public:
    void getStaff()
    {
        cout << "Enter Code: ";
        cin >> code;
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStaff()
    {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
    }
};

class Teacher : public Staff
{
private:
    string subject;
    float salary;

public:
    void getTeacher()
    {
        getStaff();

        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayTeacher()
    {
        displayStaff();
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Typist : public Staff
{
private:
    int speed;

public:
    void getTypist()
    {
        getStaff();

        cout << "Enter Typing Speed: ";
        cin >> speed;
    }

    void displayTypist()
    {
        displayStaff();
        cout << "Typing Speed: " << speed << " wpm" << endl;
    }
};

int main()
{
    Teacher t;
    Typist ty;

    cout << "Enter Teacher Information:\n";
    t.getTeacher();

    cout << "\nTeacher Information:\n";
    t.displayTeacher();

    cout << "\nEnter Typist Information:\n";
    ty.getTypist();

    cout << "\nTypist Information:\n";
    ty.displayTypist();

    return 0;
}