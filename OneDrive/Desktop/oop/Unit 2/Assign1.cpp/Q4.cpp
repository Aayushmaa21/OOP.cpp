//Write a program that converts an integer ASCII value into its corresponding character.
#include<iostream>
using namespace std;
int main(){
    int a = 98;
    cout<<"Integer value is "<< a <<endl;
    cout <<"Converted ASCII value is "<< static_cast<char>(a);
    return 0;
}