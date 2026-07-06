#include <iostream>
using namespace std;

int* getAddress(int &x)
{
    return &x;
}

int main()
{
    int a = 20;

    int *ptr = getAddress(a);

    cout << *ptr;

    return 0;
}