#include<iostream>
using namespace std;

void display(int a){
    cout<<"Interger is "<<a<<endl;
}

void display(double b){
    cout<<"Double is "<<b<<endl;
}

void display(string c){
    cout<<"String is "<<c<<endl;
}

int main(){
    display(5);
    display(5.96);
    display("aayushma");

    return 0;
}