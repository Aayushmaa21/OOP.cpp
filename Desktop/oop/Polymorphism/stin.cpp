#include <iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << "Base display" << endl;
    }
};

class Derived : public Base
{
public:
    // Function Overloading
    void display(int x)
    {
        cout << "Derived display: " << x << endl;
    }
};

int main()
{
    Derived obj;

    obj.display(10);        // Calls Derived::display(int)
    obj.Base::display();    // Calls Base::display()

    return 0;
}