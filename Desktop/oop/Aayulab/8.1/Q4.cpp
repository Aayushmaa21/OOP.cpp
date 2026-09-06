#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open file for both reading and writing
    fstream file("data.txt", ios::in | ios::out | ios::trunc);

    // Write data to the file
    file << "Hello World";

    // Display current write pointer position
    cout << "Writing pointer position: " << file.tellp() << endl;

    // Move write pointer to position 6
    file.seekp(6);

    // Overwrite part of the file
    file << "C++";

    // Move read pointer to the beginning
    file.seekg(0);

    // Display current read pointer position
    cout << "Reading pointer position: " << file.tellg() << endl;

    // Move read pointer to position 6
    file.seekg(6);

    cout << "Reading pointer after seekg(): "
         << file.tellg() << endl;

    // Read and display data
    string data;
    file >> data;

    cout << "String is: " << data << endl;

    // Close the file
    file.close();

    return 0;
}