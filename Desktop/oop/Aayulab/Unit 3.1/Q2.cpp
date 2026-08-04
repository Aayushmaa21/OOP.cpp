#include <iostream>
using namespace std;

class Circle {
private:
    float radius;
    float pi=3.14;

public:
    Circle(float r){
        radius = r;
    }
    int calculate(){
        return pi*radius*radius;
    }
    void display() {
        cout << "Area = " <<calculate()<<"sq.m"<< endl;
    }
};

int main() {
    Circle c(45.8);

  
    c.display();

  

    return 0;
}