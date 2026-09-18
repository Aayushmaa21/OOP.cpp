#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, x;

    cout << "Enter an integer: ";
    cin >> n;

    // Write
    if (n < 100)
    {
        ofstream file("SMALL.TXT");
        file << n;
        file.close();

        // Read
        ifstream readFile("SMALL.TXT");
        readFile >> x;
        readFile.close();

        cout << "Data read from SMALL.TXT: " << x;
    }
    else
    {
        ofstream file("LARGE.TXT");
        file << n;
        file.close();

        // Read
        ifstream readFile("LARGE.TXT");
        readFile >> x;
        readFile.close();

        cout << "Data read from LARGE.TXT: " << x;
    }

    return 0;
}