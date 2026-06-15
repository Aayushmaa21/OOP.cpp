/*Write a program that takes a floating-point number from the user and converts it into:
Integer and Long Integer*/
#include<iostream>
using namespace std;
int main(){
    float a;
    cout<<"Enter value of a"<<endl;
    cin>>a;

    cout<<"Enter floating-point number is: "<<a<<endl;
    cout<<"Interger value is: "<<static_cast<int>(a)<<endl;
    cout<<"Long integer value is: "<<static_cast<long>(a);



    return 0;
}