//Write a program to calculate the average of three integers and store the result as a float.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter value of a,b and c"<<endl;
    cin >> a >> b >> c ;
    float average = static_cast<float>(a+b+c)/3;
    cout << "Average floating value is "<< average;

    return 0;
}