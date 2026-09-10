#include <iostream>
#include <cmath>
using namespace std;

class Vector
{
private:
    int a, b;

public:

    // Input function
    void input()
    {
        cout << "Enter a and b: ";
        cin >> a >> b;
    }

    // Display function
    void display()
    {
        cout << "(" << a << ", " << b << ")" << endl;
    }

    // Pre-increment operator
    Vector operator++()
    {
        a++;
        b++;

        return *this; //or  Vector temp; temp.a = a; temp.b = b; return temp
    
    }

    // + operator
    Vector operator+(Vector v)
    {
        Vector temp;

        temp.a = a + v.a;
        temp.b = b + v.b;

        return temp;
    }

    // > operator
    bool operator>(Vector v)
    {
        return sqrt(a*a + b*b) > sqrt(v.a*v.a + v.b*v.b);
    }
};

int main()
{
    Vector A, B, C;

    // Input
    cout << "Enter Vector A:" << endl;
    A.input();

    cout << "Enter Vector B:" << endl;
    B.input();

    // Display original vectors
    cout << "\nVector A: ";
    A.display();

    cout << "Vector B: ";
    B.display();

    // Pre-increment
    ++A;

    cout << "\nAfter pre-increment of A: ";
    A.display();

    // Addition
    C = A + B;

    cout << "\nA + B = ";
    C.display();

    // Compare magnitude
    cout << "\nMagnitude comparison:" << endl;

    if(A > B)
        cout << "Vector A has greater magnitude." << endl;
    else
        cout << "Vector B has greater or equal magnitude." << endl;

    return 0;
}