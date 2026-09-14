#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int choice, roll, searchRoll;
    string name;
    float marks;

    cout << "\n1. Add Student";
    cout << "\n2. Display Students";
    cout << "\n3. Search Student";
    cout << "\n4. Exit";

    cout << "\nEnter choice: ";
    cin >> choice;

    while (choice != 4)
    {
        if (choice == 1)
        {
            ofstream file("student.txt", ios::app);

            cout << "Enter roll, name and marks: ";
            cin >> roll >> name >> marks;

            file << roll << " " << name << " " << marks << endl;

            file.close();
        }

        else if (choice == 2)
        {
            ifstream file("student.txt");

            while (!file.eof())
            {
                file >> roll >> name >> marks;

                if (!file.eof())
                    cout << roll << " " << name << " " << marks << endl;
            }

            file.close();
        }

        else if (choice == 3)
        {
            ifstream file("student.txt");

            cout << "Enter roll to search: ";
            cin >> searchRoll;

            while (!file.eof())
            {
                file >> roll >> name >> marks;

                if (roll == searchRoll)
                {
                    cout << "Found: " << roll << " "
                         << name << " " << marks << endl;
                    break;
                }
            }

            file.close();
        }

        cout << "\nEnter choice: ";
        cin >> choice;
    }

    return 0;
}