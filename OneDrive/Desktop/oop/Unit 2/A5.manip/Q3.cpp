//Program to display value of pie using setprecision
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    long double pie =3.14159265;
    cout <<"Value with precision 3 is: "<< setprecision(3)<<pie<<endl;
    cout <<"Value with precision 5 is: "<< setprecision(5)<<pie;


    return 0;
}