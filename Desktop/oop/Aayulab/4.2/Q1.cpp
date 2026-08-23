#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    // Constructor
    Counter(int c) {
        count = c;
    }

    // Overloading pre-increment operator
    void operator++() {
        ++count;
    }

    // Display count
    void display() {
        cout << "Count = " << count << endl;
    }
};

int main() {
    Counter c(5);

    cout << "Before increment: ";
    c.display();

    ++c;   // Calls operator++()

    cout << "After increment: ";
    c.display();

    return 0;
}