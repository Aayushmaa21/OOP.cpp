#include<iostream>
using namespace std;


int main(){
    int balance,withdraw;
    balance = 10000000;

    cout<<"Enter amount to be withdrawn";
    cin>> withdraw;

    try{
        if(withdraw > balance){
            throw 3;
        }
        if(withdraw <= 0){
            throw "Zero";
        }
        cout<<"WITHDRAWN SUCCESSFULLY";
        balance = balance - withdraw;
        cout<<"Balance is: "<<balance;
        
    }

    catch(int x){
        cout<<"Insufiicuent balance";
    }
    catch(...){
        cout<<"Unexpected Error Occurs";
    }



    return 0;
}