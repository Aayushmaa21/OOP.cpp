#include <iostream>
using namespace std;

class Number {
    public:
    int x;

public:
    Number(int a) {
        x = a;
    }

    void operator++() {
        ++x;
    }

    // void display() {
    //     cout << x;
    // }
};

int main() {
    Number n(5);

    ++n;
     cout << n.x;
   // }
   // n.display();

    return 0;
}