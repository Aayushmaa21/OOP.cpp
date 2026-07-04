#include <iostream>
using namespace std;

void increase(int &num)
{
    num = num + 5;
}

int main()
{
    int x = 10;

    cout << "Before: " << x << endl;

    increase(x);

    cout << "After: " << x << endl;

    return 0;
}