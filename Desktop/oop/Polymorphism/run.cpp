#include<iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout<<"Base"<<endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout<<"Derived"<<endl;
    }
};

int main()
{
    Base *ptr;

    Derived d;

    ptr=&d;

    ptr->display();
}