#include <iostream>
using namespace std;

class Student
{
private:
    static int count;

public:
    Student()
    {
        count++;
    }

    static void displayCount()
    {
        cout << "Total Objects = " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;

    Student::displayCount();
}