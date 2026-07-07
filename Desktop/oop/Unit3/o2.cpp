#include <iostream>
using namespace std;

class Student {
public:
    int marks;

    Student(int m) {
        marks = m;
    }
};

void showMarks(Student &s) {   // Pass by reference
    s.marks = 100;             // Changes the original object
    cout << "Inside function: " << s.marks << endl;
}

int main() {
    Student s1(85);

    showMarks(s1);

    cout << "In main: " << s1.marks << endl;

    return 0;
}