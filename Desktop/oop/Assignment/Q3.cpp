#include <iostream>
using namespace std;

class Time
{
    int hour, minute;

public:
    Time(int h = 0, int m = 0)
    {
        hour = h;
        minute = m;
    }

    Time operator+(Time t)
    {
        Time temp;

        temp.minute = minute + t.minute;
        temp.hour = hour + t.hour;

        if (temp.minute >= 60)
        {
            temp.minute -= 60;
            temp.hour++;
        }

        return temp;
    }

    void display()
    {
        cout << hour << " hours " << minute << " minutes";
    }
};

int main()
{
    Time t1(2, 45);
    Time t2(3, 30);

    Time t3 = t1 + t2;

    cout << "Total Time: ";
    t3.display();

    return 0;
}