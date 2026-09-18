#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    // Constructor for basic-to-user-defined conversion
    Number(int a)
    {
        x = a;
    }

    void display()
    {
        cout << "Number = " << x;
    }
};

int main()
{
    int a = 10;

    Number n = a;   // int → Number

    n.display();

    return 0;
}