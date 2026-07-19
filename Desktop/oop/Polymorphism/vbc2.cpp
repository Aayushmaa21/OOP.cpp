///with overriding
#include <iostream>
using namespace std;

class A
{
public:
    virtual void display()
    {
        cout << "Class A" << endl;
    }
};

class B : virtual public A
{
public:
    void display() override
    {
        cout << "Class B" << endl;
    }
};

class C : virtual public A
{
// public:
//     void display() override
//     {
//         cout << "Class C" << endl;
//     }
};

class D : public B, public C
{
};

int main()
{
    D obj;
    obj.display();   // Error cause both of them have their own functions

    return 0;
}