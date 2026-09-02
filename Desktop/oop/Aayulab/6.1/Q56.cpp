#include<iostream>
using namespace std;

class Boss{
    public:
    virtual void Salary()=0;
    virtual void Post()=0;

};

class Employee : public Boss{
    public:
    void Salary(){
        cout<<"Salary Provided";
    }
    void Post(){
        cout<<"Post Declared";
    }
};

int main(){
    Boss *b;
    Employee E;
    b = &E;
    b->Salary();
    b->Post();
    

    return 0;
}
