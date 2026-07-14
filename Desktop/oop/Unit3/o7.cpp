#include <iostream>
using namespace std;

class Student
{
public:
    int count;

    Student(int c)
    {
        count = c;
    }
};

//int Student::count = 0;

int main()
{
    Student s1(80);
    Student s2(90);
    Student s3(70);

    cout << "Total Objects = " << s3.count;
    cout << "Total Objects = " << s2.count;
    cout << "Total Objects = " << s1.count;

    return 0;
}