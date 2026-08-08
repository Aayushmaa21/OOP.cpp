#include<iostream>
using namespace std;
class Square; //forward declaration
class Rectangle{
    private:
    int length = 12;
    int breadth = 14;
    public:
    friend void display(Rectangle r, Square s);
};

class Square{
    private:
    int length = 14;
    public:
    friend void display(Rectangle r, Square s);
};

void display(Rectangle r,Square s){
    cout<<"Area of rectangle is: "<<r.length* r.breadth<<endl;
    cout<<"Area of square is: "<<s.length*s.length<<endl;
}

int main(){

    Rectangle r1;
    Square s1;

    display(r1,s1);

    return 0;
}