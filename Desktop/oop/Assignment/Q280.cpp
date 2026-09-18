#include <iostream>
using namespace std;

class Employee
{
public:
    virtual double CalculateSalary()
    {
        return 0;
    }
};

class HourlyEmployee : public Employee
{
    double hours, rate;

public:
    HourlyEmployee(double h, double r)
    {
        hours = h;
        rate = r;
    }

    double CalculateSalary() override
    {
        return hours * rate;
    }
};

class SalariedEmployee : public Employee
{
    double salary;

public:
    SalariedEmployee(double s)
    {
        salary = s;
    }

    double CalculateSalary() override
    {
        return salary;
    }
};

int main()
{
    HourlyEmployee h(40, 500);
    SalariedEmployee s(50000);

    Employee *e;

    e = &h;
    cout << "Hourly Employee Salary: " << e->CalculateSalary() << endl;

    e = &s;
    cout << "Salaried Employee Salary: " << e->CalculateSalary() << endl;

    return 0;
}