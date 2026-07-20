#include <iostream>
using namespace std;

class ClassB;
class ClassC;

class ClassA
{
private:
    int a;

public:
    ClassA(int x)
    {
        a = x;
    }

    friend void display(ClassA, ClassB, ClassC);
};

class ClassB
{
private:
    int b;

public:
    ClassB(int y)
    {
        b = y;
    }

    friend void display(ClassA, ClassB, ClassC);
};

class ClassC
{
private:
    int c;

public:
    ClassC(int z)
    {
        c = z;
    }

    friend void display(ClassA, ClassB, ClassC);
};

void display(ClassA obj1, ClassB obj2, ClassC obj3)
{
    cout << "Value of A = " << obj1.a << endl;
    cout << "Value of B = " << obj2.b << endl;
    cout << "Value of C = " << obj3.c << endl;

    cout << "Sum = " << obj1.a + obj2.b + obj3.c << endl;
}

int main()
{
    ClassA obj1(10);
    ClassB obj2(20);
    ClassC obj3(30);

    display(obj1, obj2, obj3);

    return 0;
}