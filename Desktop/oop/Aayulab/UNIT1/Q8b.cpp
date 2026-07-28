#include<iostream>
using namespace std;

int main(){
    int i =1;
    cout<<"Even numbers up to 100 are: ";
    for(i=1;i<=100;i++){
        if (i % 2 == 0){
            cout<<i<<",";;
        }
        else
        continue;
    }
    return 0;
}