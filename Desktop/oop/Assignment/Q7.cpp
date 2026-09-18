#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;
    float marks1, marks2, marks3;

public:

    // Default constructor
    Student()
    {
        id = 0;
        name = "Unknown";
        marks1 = marks2 = marks3 = 0;
    }

    // Parameterized constructor
    Student(int i, string n, float m1, float m2, float m3)
    {
        id = i;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    // Read student details
    void read()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter 3 marks: ";
        cin >> marks1 >> marks2 >> marks3;
    }

    // Display student details
    void display()
    {
        cout << "\nID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks1 << ", " << marks2 << ", " << marks3 << endl;
        cout << "Average: " << average() << endl;
    }

    // Calculate average
    float average()
    {
        return (marks1 + marks2 + marks3) / 3;
    }
};

int main()
{
    // Using default constructor
    Student s1;
    s1.read();

    // Using parameterized constructor
    Student s2(101, "Ram", 80, 75, 90);

    cout << "\nStudent 1:";
    s1.display();

    cout << "\nStudent 2:";
    s2.display();

    return 0;
}