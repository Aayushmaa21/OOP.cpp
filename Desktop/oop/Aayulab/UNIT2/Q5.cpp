#include<iostream>
using namespace std;

int& max(int &a,int  &b){
        if(a>b){
            return a;
        }
        else
            return b;

}

int main(){
    int x = 10,y=30;
    cout<<"Max is "<<max(x,y);
    return 0;
}