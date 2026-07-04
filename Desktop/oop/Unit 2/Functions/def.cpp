#include<iostream>
using namespace std;

void add(int x,int y=10){
    cout<<"Sum is "<< x + y<<endl;
}

int main(){
    add(5);
    return 0;
}