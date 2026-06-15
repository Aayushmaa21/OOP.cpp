//Write a program that converts a double value (25.89) into an int using static_cast.
#include<iostream>
using namespace std;
int main(){
double a = 25.89;

cout << "Original value is "<< a <<endl;
cout << "Converted value is "<<static_cast<int>(a) <<endl;
return 0;
}