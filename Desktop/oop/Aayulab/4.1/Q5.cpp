#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    // Overloading * operator
    int operator*(Box b) {
        int volume1 = length * width * height;
        int volume2 = b.length * b.width * b.height;

        return volume1 * volume2;
    }
};

int main() {
    Box box1(2, 3, 4);
    Box box2(5, 2, 3);

    int result = box1 * box2;

    cout << "Product of volumes = " << result << endl;

    return 0;
}