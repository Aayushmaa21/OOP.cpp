//Demonstrate the use of delete[] with a dynamically allocated array.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    cout<<"Element of array are ";{
    for(int i=0;i <n;i++)
        cout<<arr[i] << ",";
    }
    delete[] arr;





    return 0;
}