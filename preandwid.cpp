//Precision and width
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout << setw(5)<< 0721 << endl;
    cout << setprecision(4)<<21.43748374 << endl; //Set precision le cahi decimal aagi dekhi ko cahi count garera banauxa like 21.43 = 21.43
    cout << "Hello"<<endl << "Aayushmaa"<<endl;
    cout <<"How are you!?" << endl;
    cout <<fixed << setprecision(4)<<21.43748374 << endl;


    return 0;
}