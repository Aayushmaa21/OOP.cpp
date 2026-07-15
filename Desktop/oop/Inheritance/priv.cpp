#include <iostream>
using namespace std;

class Base
{
public:
    int a = 10;

protected:
    int b = 20;
};

class Derived : private Base
{
public:
    void show()
    {
        cout << "a = " << a << endl;   // ✅
        cout << "b = " << b << endl;   // ✅
    }
};

int main()
{
    Derived d;

    d.show();

    // cout << d.a;   // ❌ Error

    return 0;
}