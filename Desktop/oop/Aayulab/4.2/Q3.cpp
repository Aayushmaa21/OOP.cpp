#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v) {
        value = v;
    }

    // Overloading unary - operator
    int operator-() {
        return -value;
    }
};

int main() {
    Number n(10);

    cout << "Original value: 10" << endl;
    cout << "After negation: " << -n << endl;

    return 0;
}