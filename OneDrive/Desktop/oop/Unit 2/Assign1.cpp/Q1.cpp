//To convert int value into a double

#include<iostream>
using namespace std;
int main(){
    int a = 25;
    double b =static_cast<double>(a);
    cout<<"Integer Value is : "<< a <<endl;
    cout<< "After conversion" << endl<<"Double Value is : "<<b; 

    return 0;
}