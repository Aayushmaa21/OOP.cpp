#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int index;

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter index to access: ";
    cin >> index;

    try
    {
        if (index < 0 || index >= 5)
        {
            throw index;
        }

        cout << "Element at index " << index << " = " << arr[index] << endl;
    }

    catch (int x)
    {
        cout << "Error: Array index " << x << " is out of bounds!" << endl;
    }

    return 0;
}