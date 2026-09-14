#include <iostream>
using namespace std;

void divide(int a, int b)
{
    if (b == 0)
        throw b;

    cout << "Result = " << a / b << endl;
}

int main()
{
    try
    {
        divide(10, 0);
    }
    catch (int x)
    {
        cout << "Exception caught!" << endl;
        cout << "Cannot divide by zero." << endl;
    }
    return 0;
}