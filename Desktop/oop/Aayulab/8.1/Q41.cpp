#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Open file for writing and reading
    fstream file("data.txt", ios::in | ios::out);

    // Write data to the file
    file << "Hello World";

    // Display current write pointer position
    cout << "Writing pointer position: " << file.tellp() << endl;

    // Move write pointer to position 6
    file.seekp(6);

    // Overwrite part of the file
    file << "C++";

    // Close the file
    file.close();

    // Open file again for reading
    fstream readFile("data.txt", ios::in);

    // Display current read pointer position
    cout << "Reading pointer position: " << readFile.tellg() << endl;

    // Move read pointer to position 6
    readFile.seekg(6);

    cout << "Reading pointer after seekg(): "
         << readFile.tellg() << endl;

    // Read from position 6
    string word;
    readFile >> word;

    cout << "Data read: " << word << endl;

    readFile.close();

    return 0;
}