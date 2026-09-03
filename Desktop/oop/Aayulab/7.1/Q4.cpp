#include <iostream>
using namespace std;

template <class T>
class Array
{
protected:
    T arr[5];

public:
    void input()
    {
        cout << "Enter 5 elements: ";

        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
};

template <class T>
class SumArray : public Array<T>
{
public:
    T sum()
    {
        T total = 0;

        for (int i = 0; i < 5; i++)
        {
            total += this->arr[i]; //because array belongs to base class
        }

        return total;
    }
};

int main()
{
    SumArray<int> a;

    a.input();

    cout << "Sum = " << a.sum() << endl;

    return 0;
}