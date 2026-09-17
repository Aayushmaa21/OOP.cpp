#include <iostream>
using namespace std;

class Coordinate {
    int x, y;

public:
    Coordinate(int a, int b) {
        x = a;
        y = b;
    }

    void operator-() {
        x = -x;
        y = -y;
    }

    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main() {
    Coordinate c(10, -20);

    -c;

    c.display();

    return 0;
}