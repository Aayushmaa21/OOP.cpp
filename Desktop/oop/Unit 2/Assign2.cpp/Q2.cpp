//Program that converts temperature from Celsius to Fahrenheit
#include<iostream>
using namespace std;
int main(){
    float tempinC ;
    cout <<"Enter temperature in celsius "<<endl;
    cin >> tempinC;
    float F = ((9.0/5.0) * tempinC) + 32.0;
    cout<<"Temperature in Fahrenheit is: "<<static_cast<double>(F);







    return 0;
}