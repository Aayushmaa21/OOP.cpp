#include<iostream>
using namespace std;

class Math
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }

    double sum(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Math obj;

    cout << obj.sum(10,20) << endl;
    cout << obj.sum(2.5,3.5) << endl;
}