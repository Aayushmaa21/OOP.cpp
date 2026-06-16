//DMA for integer and display its value
#include<iostream>
using namespace std;

int main(){
    int *ptr = new int;
    *ptr = 25;
    cout <<"Value is "<<*ptr<<endl;
    delete ptr;


    return 0;
}