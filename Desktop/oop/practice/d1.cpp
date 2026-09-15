
#include <iostream>
using namespace std;

int volume(int l, int b, int h = 1)
{
    return l * b * h;
}

int main()
{
    cout << "Volume of box = " << volume(5, 4) << endl;
    cout << "Volume of cuboid = " << volume(5, 4, 3) << endl;

    return 0;
}