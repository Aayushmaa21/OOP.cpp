
#include <iostream>
using namespace std;

class Student {
private:
int marks;

public:
Student() {
marks = 85;
}
friend class Teacher;
};

class Teacher {
public:
void display(Student s) {
cout << "Student marks: " << s.marks << endl;
}


};

int main() {
Student s;
Teacher t;

t.display(s);

return 0;

}