#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream file("student.txt");

    string line;

    // Read until End Of File
    while (!file.eof()) {
        getline(file, line);
        cout << line << endl;
    }

    file.close();

    return 0;
}