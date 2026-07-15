#include <iostream>
using namespace std;

class Base
{
public:
    int a = 10;

protected:
    int b = 20;

private:
    int c = 30;
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "a = " << a << endl;   // ✅ Public
        cout << "b = " << b << endl;   // ✅ Protected
        // cout << c;                  // ❌ Error
    }
};

int main()
{
    Derived d;

    d.show();

    cout << d.a << endl;   // ✅ Allowed
    // cout << d.b;        // ❌ Error
    // cout << d.c;        // ❌ Error

    return 0;
}