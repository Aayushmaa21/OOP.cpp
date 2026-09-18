#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int age;
    string gender;

public:
    Employee(string n, int a, string g)
    {
        name = n;
        age = a;
        gender = g;
        cout << "Employee constructor called" << endl;
    }

    ~Employee()
    {
        cout << "Employee destructor called" << endl;
    }

    void displayBasic()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

class EmployeeSalary : public Employee
{
    float monthlySalary;

public:
    EmployeeSalary(string n, int a, string g, float salary)
        : Employee(n, a, g)
    {
        monthlySalary = salary;
        cout << "EmployeeSalary constructor called" << endl;
    }

    ~EmployeeSalary()
    {
        cout << "EmployeeSalary destructor called" << endl;
    }

    void displaySalary()
    {
        float yearlySalary = monthlySalary * 12;
        float tax = yearlySalary * 0.15;
        float netSalary = yearlySalary - tax;

        displayBasic();

        cout << "Monthly Salary: " << monthlySalary << endl;
        cout << "Yearly Salary after 15% tax: " << netSalary << endl;
    }
};

int main()
{
    EmployeeSalary e("Aayushma", 20, "Female", 50000);

    e.displaySalary();

    return 0;
}