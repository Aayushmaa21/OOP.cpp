
#include <iostream>
using namespace std;

class Demo {
public:
    // Function to display integer
    void display(int n) {
        cout << "Integer: " << n << endl;
    }

    // Function to display string
    void display(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Demo d;

    d.display(10);
    d.display("Hello C++");

    return 0;
}
