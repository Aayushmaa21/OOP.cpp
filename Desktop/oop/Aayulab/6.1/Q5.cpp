#include <iostream>
using namespace std;

class Employee {
public:
    void Salary() {
        cout << "Salary Provided" << endl;
    }

    void Post() {
        cout << "Post Declared" << endl;
    }
};

int main() {
    Employee E;

    E.Salary();
    E.Post();

    return 0;
}