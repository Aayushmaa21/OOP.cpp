#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inches;

public:
    // Constructor
    Distance(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
    }

    // Overloading > operator
    bool operator>(Distance d)
    {
        int total1 = feet * 12 + inches;
        int total2 = d.feet * 12 + d.inches;

        return total1 > total2;
    }
};

int main()
{
    Distance d1(5, 8);
    Distance d2(4, 10);

    if (d1 > d2)
        cout << "Distance 1 is greater than Distance 2." << endl;
    else
        cout << "Distance 1 is not greater than Distance 2." << endl;

    return 0;
}