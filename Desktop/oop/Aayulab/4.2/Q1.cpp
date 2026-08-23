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

    // Pre-increment operator
    void operator++() {
        ++count;
    }

    // Post-increment operator
    void operator++(int) { //to be noted
        count++;
    }

    // Display count
    void display() {
        cout << "Count = " << count << endl;
    }
};

int main() {
    Counter c(5);

    cout << "Initial count: ";
    c.display();

    // Pre-increment
    ++c;
    cout << "After pre-increment (++obj): ";
    c.display();

    // Post-increment
    c++;
    cout << "After post-increment (obj++): ";
    c.display();

    return 0;
}