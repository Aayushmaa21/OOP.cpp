#include <iostream>
using namespace std;

class Result;
class Teacher;

class Student {
private:
    int marks = 85;

    friend class Result;
    friend class Teacher;
};

class Result {
public:
    void show(Student s) {
        cout << "Marks: " << s.marks << endl;
    }
};

class Teacher {
public:
    void grade(Student s) {
        if (s.marks >= 50)
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
    }
};

int main() {
    Student s;
    Result r;
    Teacher t;

    r.show(s);
    t.grade(s);

    return 0;
}