//Default Construcor
#include<iostream>
using namespace std;

class Student {
    public:
    string name;

    Student(){
        name ="Aayushma";
    }

    void display(){
        cout <<"Name is " << name ;
    }
};

int main(){
    Student s;
    s.display();


    return 0;
}