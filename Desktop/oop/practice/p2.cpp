#include <iostream>
using namespace std;
template<class T>
class Number
{
private:
    T x;

public:
    void input()
    {
        cout << "Enter number: ";
        cin >> x;
    }

    Number greater(Number n)
    {
        Number temp;

        if (x > n.x)
            temp.x = x;
        else
            temp.x = n.x;

        return temp;   // returning object
    }

    void display()
    {
        cout << "Greater number = " << x << endl;
    }
};

int main()
{
    Number<int>n1, n2, n3;

    n1.input();
    n2.input();

    n3 = n1.greater(n2);   // returned object stored in n3

    n3.display();

    return 0;
}