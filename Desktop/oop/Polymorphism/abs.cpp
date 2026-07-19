#include<iostream>
using namespace std;

class Animal          // Abstract
{
public:
    virtual void sound() = 0;
};

class Dog : public Animal   // Still Abstract
{
    // sound() not implemented
};

class GermanShepherd : public Dog   // Concrete
{
public:
    void sound() override
    {
        cout << "Bark";
    }
};

int main(){
    Animal* a;
    GermanShepherd g;
    a = &g;
    a->sound();
    return 0;
}