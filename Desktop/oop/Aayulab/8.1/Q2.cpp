#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream writef("persons.txt");

    string name;
    int age;

    // Take data from terminal and write to file
    for (int i = 1; i <= 4; i++)
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        writef << name << " " << age << endl;
    }

    writef.close();

    // Read data from file
    ifstream readf("persons.txt");

    while (readf >> name >> age)
    {
        cout << "Name: " << name << " Age: " << age << endl;
    }

    readf.close();

    return 0;
}