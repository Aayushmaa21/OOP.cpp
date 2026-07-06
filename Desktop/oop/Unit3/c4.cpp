#include <iostream>
using namespace std;

class Student {
public:
    int age;

    Student(int a) {
        age = a;
    }

    Student(Student &s) {   // user-defined copy constructor
        age = s.age;
    }
};

int main() {
    Student s1(20);
    Student s2 = s1;

    cout << s2.age;

    return 0;
}