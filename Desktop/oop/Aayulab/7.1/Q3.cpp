#include <iostream>
using namespace std;

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

    void calculate()
    {
        cout << "Addition = " << a + b << endl;
        cout << "Subtraction = " << a - b << endl;
        cout << "Multiplication = " << a * b << endl;

        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Cannot divide by zero" << endl;
    }
};

int main()
{
    cout << "Integer Calculator:" << endl;
    Calculator<int> c1(10, 5);
    c1.calculate();

    cout << "\nFloat Calculator:" << endl;
    Calculator<float> c2(10.5f, 2.5f);
    c2.calculate();

    return 0;
}