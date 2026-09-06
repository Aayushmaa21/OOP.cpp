#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Create and open file for writing
    ofstream write("persons.txt");

    // Write data of multiple persons
    write << "Ram 20" << endl;
    write << "Sita 22" << endl;
    write << "Hari 19" << endl;
    write << "Gita 21" << endl;

    // Close the file
    write.close();

    // Open file for reading
    ifstream read("persons.txt");

    string name;
    int age;

    // Read and display data
    while (read >> name >> age) {
        cout << "Name: " << name << " Age: " << age << endl;
    }

    // Close the file
    read.close();

    return 0;
}