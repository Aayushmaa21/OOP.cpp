#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file;

    try
    {
        file.open("data.txt");

        if (!file)
        {
            throw "File could not be opened!";
        }

        cout << "File opened successfully." << endl;

        file.close();
    }

    catch (const char* msg)
    {
        cout << "Error: " << msg << endl;
        cout << "Program safely terminated." << endl;
        return 1;
    }

    return 0;
}