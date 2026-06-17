//Define a namespace and display its value
#include<iostream>
using namespace std;
namespace student{
        string Name = "Aayushma";
        int Roll = 15;
    }

int main(){
    using namespace student;
    cout<<"Name is: "<<Name <<endl<<"Roll number is: "<<Roll;

    return 0;
}