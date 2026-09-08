#include <iostream>
using namespace std;

// Default argument and Pass by reference
void add(int &num, int value = 10)
{
    num = num + value;
}

// Return by reference
int& Value(int &num)
{
    num = num * 2;
    return num;
}

// Pointer arithmetic
void Array(int *arr, int size)
{
    cout << "\nArray elements: ";

    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

// Inline function
inline int square(int num)
{
    return num * num;
}

int main()
{
    // Default argument
    int x = 20;

    add(x);
    cout << "After addition: " << x << endl;

    // Pass and Return by reference
    int &result = Value(x);
    cout<<"Inside return by refrence, Num = "<<x<<endl;
    cout << "Returned value: " << result << endl;

    // Array
    int arr[5] = {2, 4, 6, 8, 10};

    // Pointer arithmetic
    Array(arr, 5);

    // Inline function
    cout << "Squares are: ";

    for (int i = 0; i < 5; i++)
    {
        cout << square(*(arr + i)) << " ";
    }

    return 0;
}