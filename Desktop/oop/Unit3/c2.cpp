#include <iostream>
using namespace std;

class Student {
public:
    int age;

    Student(int a) {   // parameterized constructor
        age = a;
    }
};

int main() {
    Student s1(18);
    Student s2(20);
    Student s3(25);

    cout << s1.age << endl;
    cout << s2.age << endl;
    cout << s3.age;

    return 0;
}