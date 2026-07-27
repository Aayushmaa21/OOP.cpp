#include <iostream>
using namespace std;

#define PI 3.14159
#define SHOW

int main() {
    float r;

    cout << "Enter radius: ";
    cin >> r;


#ifdef SHOW
    cout << "Code is compiled successfully!!"<<endl;
    cout << "Area = " << PI * r * r << endl;
#endif

    return 0;
}