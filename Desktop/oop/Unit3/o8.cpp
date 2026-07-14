#include <iostream>
using namespace std;

class Student
{
public:
    static void display(int x);
};

void Student::display(int x)
{
    cout << "Value = " << x;
}

int main()
{
    Student::display(10);
}