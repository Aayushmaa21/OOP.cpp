#include <iostream>
using namespace std;

template <typename T>
class A
{
private:
    T x, y, z;

public:
    // Constructor
    A(T a, T b, T c)
    {
        x = a;
        y = b;
        z = c;
    }

    // Member function with its own arguments
    T sub()
    {
        return x - y - z;
    }
};

int main()
{
    // Object created with constructor values
    A<int> obj(10, 5, 6);

    // Function called with different arguments
    cout << "Result = " << obj.sub();

    return 0;
}