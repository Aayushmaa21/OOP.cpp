//Create a program that converts a character entered by the user into its ASCII value.
#include<iostream>
using namespace std;
int main(){
    char a = 'A';
    cout<<"Character is "<< a << endl;
    cout<<"ASCII value is "<<static_cast<int>(a);
    return 0;
}