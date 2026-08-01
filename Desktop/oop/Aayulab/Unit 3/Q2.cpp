#include<iostream>
using namespace std;

class Rectangle{
    private:
    float length;
    float breadth ;
    public:
    void input(){
        cout<<"Enter length and breadth"<<endl;
        cin>>length>>breadth;
    }
    int Area(){
        return length*breadth;
    }

    void display(){
        cout<<"Area is "<<Area()<<endl;
    }
};

int main(){
    Rectangle r;
    r.input();
    r.display();

    return 0;
}