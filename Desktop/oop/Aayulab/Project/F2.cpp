#include <iostream>
#include <fstream>
using namespace std;

class Inventory
{
public:
    int id;
    char name[20];
    int quantity;
    float price;
};

int main()
{
    Inventory x;
    int choice, searchID;

    do
    {
        cout << "\n1. Add";
        cout << "\n2. Display";
        cout << "\n3. Search";
        cout << "\n4. Update Quantity";
        cout << "\n5. Exit";
        cout << "\nChoice: ";
        cin >> choice;

        // Add
        if (choice == 1)
        {
            ofstream file("inventory.dat", ios::binary | ios::app);

            cout << "Enter ID Name Quantity Price: ";
            cin >> x.id >> x.name >> x.quantity >> x.price;

            file.write((char*)&x, sizeof(x));
            file.close();
        }

        // Display
        else if (choice == 2)
        {
            ifstream file("inventory.dat", ios::binary);

            while (file.read((char*)&x, sizeof(x)))
            {
                cout << x.id << " " << x.name << " "
                     << x.quantity << " " << x.price << endl;
            }

            file.close();
        }

        // Search
        else if (choice == 3)
        {
            ifstream file("inventory.dat", ios::binary);

            cout << "Enter ID: ";
            cin >> searchID;

            while (file.read((char*)&x, sizeof(x)))
            {
                if (x.id == searchID)
                {
                    cout << x.id << " " << x.name << " "
                         << x.quantity << " " << x.price;
                    break;
                }
            }

            file.close();
        }

        // Update
        else if (choice == 4)
        {
            fstream file("inventory.dat",
                         ios::binary | ios::in | ios::out);

            cout << "Enter ID: ";
            cin >> searchID;

            while (file.read((char*)&x, sizeof(x)))
            {
                if (x.id == searchID)
                {
                    cout << "Enter new quantity: ";
                    cin >> x.quantity;

                    file.seekp(-sizeof(x), ios::cur);
                    file.write((char*)&x, sizeof(x));

                    cout << "Updated!";
                    break;
                }
            }

            file.close();
        }

    } while (choice != 5);

    return 0;
}