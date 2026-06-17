//Write a program to demonstrate data loss when converting a double value into an int.
#include<iostream>
using namespace std;

int main(){
    double a = 9.8;
    int b = static_cast<double>(a);
    cout<<"Data type in double: "<< a<<endl;
    cout<<"Data type in int: "<<b<<endl;
    cout<<"Net data loss is: "<< a-b;



    return 0;
}