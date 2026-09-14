#include<iostream>
using namespace std;

template <class T>
class Array{
    public:
    T arr[5];
    
arr ={20,50,87,12,60};


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



};