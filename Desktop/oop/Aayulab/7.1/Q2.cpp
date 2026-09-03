#include <iostream>
using namespace std;

template <class T1, class T2>
void display(T1 a, T2 b)
{
    cout << "First value: " << a << endl;
    cout << "Second value: " << b << endl;
}

int main()
{
    display(10, 20.5f);        // int and float

    cout << endl;

    display(15.5f, "Hello");    // float and string

    cout << endl;

    display('A', 100);          // char and int

    return 0;
}