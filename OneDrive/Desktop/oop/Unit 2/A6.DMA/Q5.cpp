//Demonstrate the use of delete[] with a dynamically allocated array.
#include<iostream>
using namespace std;

int main(){
    int n;
    int *arr = new int[3];
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;

    cout<<"Element of array are ";{
    for(int i=0;i <3;i++)
        cout<<arr[i] << " ";
    }
    cout << endl;
    delete[] arr;





    return 0;
}