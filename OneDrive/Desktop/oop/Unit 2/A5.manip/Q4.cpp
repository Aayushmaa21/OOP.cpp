//Program to display exactly 2 decimal using fixed and setprecision
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    long double pie =3.14159265;
    cout <<"Value exactly 2 digits after decimal is: "<<fixed<<setprecision(2)<<pie<<endl;
  

    return 0;
}