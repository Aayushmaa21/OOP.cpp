//Funstions overloading
#include<iostream>
using namespace std;

void display(int a){
    cout<<"Number is"<< a << endl;
}

void display(double a){
    cout<<"Number is "<< a << endl;
}

int main(){
    display(5);
    display(5.45);



    return 0;
}