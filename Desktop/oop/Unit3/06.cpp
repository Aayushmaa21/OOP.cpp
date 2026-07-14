#include<iostream>
using namespace std;

class Student{
    public:
    int marks;

    Student(int m){
        marks =m;
    }

    void display(){
        cout<<"Marks is "<<marks<<endl;
    }

};

Student add(Student s1,Student s2){
    Student s3(s1.marks + s2.marks);
    return s3;
}

int main(){
    Student s1(20),s2(70);
    Student s3 = add(s1,s2);
    s3.display();
    return 0;
}

