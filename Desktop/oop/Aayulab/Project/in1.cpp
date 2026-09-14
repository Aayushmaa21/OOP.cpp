#include <iostream>
using namespace std;

class Employee
{
public:
    void show()
    {
        cout << "Employee" << endl;
    }
};
//single
class Manager : public Employee
{
public:
    void manage()
    {
        cout << "Manager" << endl;
    }
};

class Clerk : public Employee
{
public:
    void work()
    {
        cout << "Clerk" << endl;
    }
};

// Multilevel
class SeniorEngineer : public Manager
{
public:
    void lead()
    {
        cout << "Senior Engineer" << endl;
    }
};

// Multiple
class ProjectManager : public Manager, public Clerk
{
public:
    void project()
    {
        cout << "Project Manager" << endl;
    }
};

int main()
{
    Manager m;
    m.show();
    m.manage();

    SeniorEngineer s;
    s.show();
    s.lead();

    ProjectManager p;
    p.manage();
    p.work();
    p.project();

    return 0;
}