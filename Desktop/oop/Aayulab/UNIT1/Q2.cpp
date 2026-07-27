//Data Type and Type conversion
#include<iostream>
using namespace std;

int main(){
    int a;
    float b;
    char c;
    cout<<"Enter integer,float,character"<<endl;
    cin>>a>>b>>c;
    cout <<"Interger is: "<<a<<endl
         <<"Size of integer is: "<<sizeof(a)<<endl;
    cout <<"Float is: "<<b<<endl
         <<"Size of float is: "<<sizeof(b)<<endl;
    cout <<"Character is: "<<c<<endl
         <<"Size of character is: "<<sizeof(c)<<endl;
    cout<<"Explicit conversion of float into integer: "<<static_cast<int>(b)<<endl;
    cout<<"Implicit conversion of integer into float: "<<a+b;

    

    return 0;
}
