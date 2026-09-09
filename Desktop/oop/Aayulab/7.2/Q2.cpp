#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter value of a: ";
    cin>>a;
    try{
        if(a == 0){
            throw 0;
        }

        if(a < 0){
            throw "Negative";
        }

        if (a > 100){
        throw 3.14f;  
        }
    cout<<"Number is between 0 and 100";
    }

    catch(int x){
        cout<<"Integer is Zero";
    }

    catch(const char* msg ){
        cout<<msg;
    }
    catch(float x){
        cout<<"Integer is positive";
    }

    return 0;
}