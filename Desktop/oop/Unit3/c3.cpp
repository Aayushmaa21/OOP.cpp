#include <iostream>
using namespace std;

class Student {
public:
    int age;

    Student() {
        age = 18;
    }
};

int main() {
    Student s1;
    Student s2 = s1;   // default copy constructor used

    cout << s2.age;

    return 0;
}