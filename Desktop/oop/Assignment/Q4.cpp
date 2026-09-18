#include <iostream>
#include <fstream>
using namespace std;

class MOVIE
{
    string name;
    string genre;

public:
    void getData()
    {
        cout << "Enter movie name: ";
        cin >> name;

        cout << "Enter genre (comedy/action): ";
        cin >> genre;
    }

    void save()
    {
        if (genre == "comedy")
        {
            ofstream file("COMEDY.DAT", ios::app);
            file << name << " " << genre << endl;
            file.close();
        }
        else if (genre == "action")
        {
            ofstream file("ACTION.DAT", ios::app);
            file << name << " " << genre << endl;
            file.close();
        }
        else
        {
            cout << "Invalid genre!" << endl;
        }
    }
};

int main()
{
    MOVIE m;

    m.getData();
    m.save();

    return 0;
}