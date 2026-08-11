#include<iostream>
using namespace std;

class Vehicle{
    private:
    string engine = "engine";

    protected:
    string seat = "seat";

    public:
    int number = 7214;
};

class Car:public Vehicle{
public:
//cout<<"Engine is: "<<engine<<endl; private cannot be accessed
void display(){
cout<<"Seat is: "<<seat<<endl;
cout<<"Number Plate is: "<<number<<endl;}

};

int main(){
    Car c;
    c.display();
    cout<<"Number accessed in main is: "<<c.number;
    //c.seat; Error
    //c.engine; Error



    return 0;
}
