#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    char name[50];
    int roll;
    float marks;

    void input()
    {
        cout << "Enter name: ";
        cin.getline(name, 50);

        cout << "Enter roll: ";
        cin >> roll;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    // Write object to file
    s.input();

    ofstream out("student.dat", ios::binary);
    out.write((char*)&s, sizeof(s)); // write complete s obj content into file
    out.close();

    // Read object from file
    Student s2;

    ifstream in("student.dat", ios::binary);
    in.read((char*)&s2, sizeof(s2));
    in.close();

    // Display data
    cout << "\nData read from file:";
    s2.display();

    return 0;
}