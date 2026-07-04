#include<iostream>
using namespace std;

int& increase(int &num)
{
    int a = num + 5;
    return a;
}

int main()
{
    int x = 10;

    cout << "Before: " << x << endl;

    increase(x) = 20;

    cout << "After: " << x << endl;

    return 0;
}