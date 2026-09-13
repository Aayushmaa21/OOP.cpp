#include <iostream>
using namespace std;

template <typename T>
T greaterNumber(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;
    float x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Greater integer = " << greaterNumber(a, b) << endl;

    cout << "Enter two floating-point numbers: ";
    cin >> x >> y;

    cout << "Greater floating-point number = "
         << greaterNumber(x, y) << endl;

    return 0;
}