#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;

class Employee
{
public:
    char name[30];
    int id;
    float salary;
};

int main()
{
    Employee e;

    // Open binary file for writing
    fstream file("employees.dat",
                 ios::in | ios::out | ios::binary | ios::trunc);

    // Write multiple employee records
    cout << "Enter details of 3 employees:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter name: ";
        cin >> e.name;

        cout << "Enter ID: ";
        cin >> e.id;

        cout << "Enter salary: ";
        cin >> e.salary;

        file.write(reinterpret_cast<char*>(&e), sizeof(e));
    }

    
    // Jump to the second record
    file.seekg(sizeof(Employee), ios::beg);

    file.read(reinterpret_cast<char*>(&e), sizeof(e));

    cout << "\nSecond Employee:\n";
    cout << "Name: " << e.name << endl;
    cout << "ID: " << e.id << endl;
    cout << "Salary: " << e.salary << endl;

    //Moving pointer to beginning
    file.seekp(0, ios::beg);

    while (!file.eof())
{
    file.read(reinterpret_cast<char*>(&e), sizeof(e));

    if (!file.eof())
    {
        cout<<"Details are: "<<endl;
        cout <<fixed<< setprecision(1)<< e.name << endl;
        cout <<fixed<< setprecision(1)<< e.id << endl;
        cout <<fixed<< setprecision(1)<< e.salary << endl;
    }
}

    file.close();

    return 0;
}