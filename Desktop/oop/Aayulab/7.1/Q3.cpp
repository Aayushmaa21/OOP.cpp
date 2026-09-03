#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter value of a and b";
    cin>> a >> b;

    try{
    if(b == 0){
        throw b;
    }
    if(b < 0){
        throw 3.14;
    }
        cout<<"Division is: "<< a / b <<endl;
}
    catch(int x){
        cout<<"Cannot divide by zero";
    }
    catch(...){
        cout<<"Exception occurs";
    }

    return 0;
}