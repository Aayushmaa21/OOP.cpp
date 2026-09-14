#include<iostream>
using namespace std;

template <class T>
class Array{
    public:
    T arr[5];

};
template<class T>
void sortArray(T arr[]) 
{ 
    for (int i = 0; i < 5 - 1; i++)
     { 
        for (int j = 0; j < 5 - i - 1; j++) 
        { 
            if (arr[j] > arr[j + 1]) 
            { 
                T temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            } 
        } 
    } 
}

template <class T>
void display(T arr[], string name)
{
    cout << name << ": ";

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    Array<int> a = {{20, 50, 87, 12, 60}};
    Array<float> b = {{20.5, 50.2, 87.7, 12.4, 60.1}};

    sortArray(a.arr);
    sortArray(b.arr);

    display(a.arr, "Integer Array");
    display(b.arr, "Float Array");

    return 0;
}
