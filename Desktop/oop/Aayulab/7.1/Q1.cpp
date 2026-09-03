#include <iostream>
using namespace std;

template <class T>
T findMax(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Maximum integer: " << findMax(10, 20) << endl;

    cout << "Maximum float: " << findMax(10.5f, 7.2f) << endl;

    cout << "Maximum character: " << findMax('A', 'Z') << endl;

    return 0;
}