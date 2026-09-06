#include <iostream>
#include <fstream>
using namespace std;

class Employee
{
    int id;
    char name[30];
    float salary;

public:
    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee ID: " << id;
        cout << "\nEmployee Name: " << name;
        cout << "\nSalary: " << salary << endl;
    }
};

int main()
{
    Employee e;
    fstream file;
    int n;

    // Open file for writing
    file.open("employee.dat", ios::out | ios::binary);

    cout << "Enter number of employees: ";
    cin >> n;

    // Write objects to binary file
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << ":\n";
        e.getData();

        file.write(reinterpret_cast<char*>(&e), sizeof(e));
    }

    file.close();

    // Open file for reading
    file.open("employee.dat", ios::in | ios::binary);

    // Read objects from binary file
    while (file.read(reinterpret_cast<char*>(&e), sizeof(e)))
    {
        e.display();
    }

    file.close();

    return 0;
}