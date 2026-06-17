//Write a program to create an object dynamically using new and access its member function.
#include<iostream>
using namespace std;

class Student{
public:
    void show(){
        cout<<"This is dynamically created object."<<endl;
    }

};

int main(){
    Student *s = new Student;
     s->show();

   
    delete s;



    return 0;
}
