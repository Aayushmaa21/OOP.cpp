#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    char name[50];
};

int main()
{
    Student s;

    fstream file("student.dat",
                 ios::in | ios::out | ios::binary | ios::trunc);

    // Write names of 3 students
    for(int i = 0; i < 3; i++)
    {
        cout << "Enter name: ";
        cin >> s.name;

        file.write(reinterpret_cast<char*>(&s), sizeof(s));
    }

    // Move to beginning
    file.seekg(0, ios::beg);

    // Read all names
    while(file.read(reinterpret_cast<char*>(&s), sizeof(s)))
    {
        cout << "Name: " << s.name << endl;
    }

    file.close();

    return 0;
}