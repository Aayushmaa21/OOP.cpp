#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    char name[50];
    int roll;
    float marks;
};

int main()
{
    Student s1;

    // Input student data
    cout << "Enter name: ";
    cin.getline(s1.name, 50);

    cout << "Enter roll number: ";
    cin >> s1.roll;

    cout << "Enter marks: ";
    cin >> s1.marks;

    // Open binary file for writing
    ofstream outFile("student.dat", ios::binary);

    // Write object into binary file
    outFile.write(reinterpret_cast<char*>(&s1), sizeof(s1));

    outFile.close();

    // Open binary file for reading
    ifstream inFile("student.dat", ios::binary);

    Student s2;

    // Read object from binary file
    inFile.read(reinterpret_cast<char*>(&s2), sizeof(s2));

    // Display data
   
    cout << "Name: " << s2.name << endl;
    cout << "Roll Number: " << s2.roll << endl;
    cout << "Marks: " << s2.marks << endl;

    inFile.close();

    return 0;
}