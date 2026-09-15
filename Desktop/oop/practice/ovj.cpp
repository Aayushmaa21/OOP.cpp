#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
};

class Dog : public Animal
{
public:
    int weight;
};

int main()
{
    Dog d;
    d.age = 5;
    d.weight = 20;

    Animal a = d;   // Object slicing

    cout << "Age = " << a.age << endl;

    return 0;
}