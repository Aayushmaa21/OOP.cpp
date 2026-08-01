#include<iostream>
using namespace std;

struct Student{
    int id;
    string name;
    float marks1,marks2,marks3;
};

class Result{
    private:
    Student s;
    float average;
    public:
    void data(){
    cout<<"Enter students details"<<endl;
        cin>>s.id>>s.name>>s.marks1>>s.marks2>>s.marks3;
    }
    void display(){
        average = (s.marks1+s.marks2+s.marks3)/3;
        cout<<"Student's id: "<<s.id<<endl;
        cout<<"Student's name: "<<s.name<<endl;
        cout<<"Average marks is "<<average;
    }

};

int main(){
    Result r;
    r.data();
    r.display();

    return 0;
}