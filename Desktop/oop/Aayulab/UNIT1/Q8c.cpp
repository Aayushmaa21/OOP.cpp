#include<iostream>
using namespace std;

int main(){
    int choice;
    int a,b;
    cout<<"Welcome to your mini Calculator"<<endl;
    cout<<"What do you want to perform?"<<endl
        <<"Enter your choice.."<<endl
        <<"1.Addition"<<endl
        <<"2.Subtraction"<<endl
        <<"3.Multiplication"<<endl
        <<"4.Division"<<endl;
    cin>>choice;
    cout<<"Enter your digits"<<endl;
    cin>> a>>b;
    switch(choice){
        case 1:
            cout<<"Addition is: "<< a+b;
            break;
        case 2:
            cout<<"Subtraction is: "<< a-b;
            break;
        case 3:
            cout<<"Multiplication is: "<< a*b;
            break;
        case 4:
            cout<<"Division is: "<< static_cast<float>(a)/b;
            break;
        default:
            cout<<"Invalid Choice";

    }



    return 0;
}