#include <iostream>
using namespace std;

class PERSON
{
private:
    string name;
    int age;

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    bool operator>(PERSON p)
    {
        return age > p.age;
    }

    void display()
    {
        cout << "Older person: " << name << endl;
    }
};

int main()
{
    PERSON p1, p2;

    cout << "Enter details of first person:\n";
    p1.input();

    cout << "\nEnter details of second person:\n";
    p2.input();

    if (p1 > p2)
        p1.display();
    else
        p2.display();

    return 0;
}