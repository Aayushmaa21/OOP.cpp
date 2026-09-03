#include <iostream>
using namespace std;

// Function template
template <class T>
T add(T a, T b)
{
    return a + b;
}

// Class template
template <class T>
class Calculator
{
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    T subtract()
    {
        return a - b;
    }
};

// User-defined class
// It does NOT have + operator
class Number
{
public:
    int value;

    Number(int x)
    {
        value = x;
    }
};

int main()
{
    // Function template with int
    cout << "Integer addition = " << add(10, 20) << endl;

    // Function template with float
    cout << "Float addition = " << add(10.5f, 5.5f) << endl;

    // Class template with int
    Calculator<int> c1(20, 5);
    cout << "Integer subtraction = " << c1.subtract() << endl;

    // Class template with float
    Calculator<float> c2(20.5f, 5.5f);
    cout << "Float subtraction = " << c2.subtract() << endl;


    /*
       UNSUPPORTED TYPE:

       Number n1(10), n2(20);

       add(n1, n2);

       This will give a COMPILATION ERROR.

       Reason:
       The add() function contains:

           return a + b;

       Therefore, T must support the + operator.

       Number does not have a + operator.

       So C++ cannot perform:

           n1 + n2

       This is a compilation error, NOT a runtime error.
       Therefore, try-catch cannot be used to handle it.

       To make it work, we would have to define
       operator+ for the Number class.
    */

    return 0;
}