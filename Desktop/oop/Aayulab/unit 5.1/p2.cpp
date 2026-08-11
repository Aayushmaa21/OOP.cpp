#include <iostream>
using namespace std;

class Height
{
private:
    int feet;
    int inch;

public:
    Height(int f = 0, int i = 0)
    {
        feet = f;
        inch = i;
    }

    Height add(Height h)
    {
        Height temp;

        temp.feet = feet + h.feet;
        temp.inch = inch + h.inch;

        // Convert extra inches into feet
        if (temp.inch >= 12)
        {
            temp.feet = temp.feet + temp.inch / 12;
            temp.inch = temp.inch % 12;
        }

        return temp;
    }

    void display()
    {
        cout << feet << " feet " << inch << " inches" << endl;
    }
};

int main()
{
    Height h1(5, 8);
    Height h2(4, 7);

    Height h3 = h1.add(h2);

    cout << "First height: ";
    h1.display();

    cout << "Second height: ";
    h2.display();

    cout << "Total height: ";
    h3.display();

    return 0;
}