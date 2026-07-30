#include <iostream>
using namespace std;


inline int square(int n) {
    return n * n;
}

int main() {
    cout << "Square of 5 = " << square(5) << endl;
    cout << "Square of 10 = " << square(10) << endl;
    cout << "Square of 15 = " << square(15) << endl;

    return 0;
}