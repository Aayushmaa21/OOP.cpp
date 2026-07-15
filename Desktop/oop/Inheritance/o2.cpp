#include <iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << "Base Class" << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Derived Class" << endl;
    }
};

int main()
{
    Derived d; 
    d.display();
    Base b;
    b.display();
    d.Derived :: display();
    d.Base :: display();
    
    return 0;
}