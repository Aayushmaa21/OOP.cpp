#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(){
        length = 1;
        breadth = 1;
    }
    int calculate(){
        return length * breadth;
    }
    void display(){
        cout<<"Area is: "<<calculate()<<"sq.m"<<endl;
    }
};

int main(){
    Rectangle r;
    r.display();

    return 0;
}