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
    Counter obj(5);

    cout << "Initial count: ";
    obj.display();

    // Pre-increment
    ++obj;
    cout << "After pre-increment (++obj): ";
    obj.display();

    // Post-increment
    obj++;
    cout << "After post-increment (obj++): ";
    obj.display();

    return 0;
}