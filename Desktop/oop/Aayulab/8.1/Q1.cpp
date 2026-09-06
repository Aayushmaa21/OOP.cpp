#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Create and open a file for writing
    ofstream outFile("student.txt");

    // Write data into the file
    outFile << "Name: Aayushma" << endl;
    outFile << "Course: BSc CSIT" << endl;
    outFile << "Semester: 2nd" << endl;

    // Close the file
    outFile.close();

    // Open the file for reading
    ifstream inFile("student.txt");

    string line;

    // Read data from the file
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    // Close the file
    inFile.close();

    return 0;
}