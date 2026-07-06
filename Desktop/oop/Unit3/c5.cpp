#include <iostream>
using namespace std;

class Student {
public:
    int age;

    // Default constructor
    Student() {
        age = 18;
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Student(int a) {
        age = a;
        cout << "Parameterized constructor called" << endl;
    }

    // Copy constructor
    Student(Student &s) {
        age = s.age;
        cout << "Copy constructor called" << endl;
    }

    void display() {
        cout << "Age = " << age << endl;
    }
};

int main() {
    Student s1;      // Default constructor

    Student s2(20);  // Parameterized constructor

    Student s3 = s2; // Copy constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;
}