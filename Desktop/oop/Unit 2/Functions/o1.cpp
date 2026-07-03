//Funstions overloading
#include<iostream>
using namespace std;

void display(int a,int b){
    cout<<"Number are "<< a <<endl << b << endl;
}

void display(double a,int b){
    cout<<"Number are "<< a <<endl<< b << endl;
}

int main(){
    display(5,9);
    display(5.45,20);



    return 0;
}