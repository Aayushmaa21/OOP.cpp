#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int a = 0)
    {
        x = a;
    }

    // Overload +
    Number operator+(Number n)
    {
        return Number(x + n.x);
    }

    // Overload ==
    bool operator==(Number n)
    {
        return x == n.x;
    }

    // Convert Number to int
    operator int()
    {
        return x;
    }

    void display()
    {
        cout << x << endl;
    }
};

int main()
{
    Number n1(10), n2(20);

    // Number + Number
    Number n3 = n1 + n2;
    cout << "Addition: ";
    n3.display();

    // Number == Number
    if (n1 == n2)
        cout << "Numbers are equal\n";
    else
        cout << "Numbers are not equal\n";

    // int -> Number
    Number n4 = 50;
    cout << "Int to Number: ";
    n4.display();

    // Number -> int
    int a = n1;
    cout << "Number to int: " << a << endl;

    return 0;
}