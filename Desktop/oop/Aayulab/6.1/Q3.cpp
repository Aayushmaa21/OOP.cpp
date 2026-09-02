
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal *ptr;   // Base class pointer

    Dog dog;
    Cat cat;

    // Pointing to Dog object
    ptr = &dog;
    ptr->sound();

    // Pointing to Cat object
    ptr = &cat;
    ptr->sound();

    return 0;
}

