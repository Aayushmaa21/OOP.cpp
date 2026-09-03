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
        cout<<"Division is: "<< a / b <<endl;
}
    catch(int x){
        cout<<"Cannot divide by zero";
    }


    return 0;
}