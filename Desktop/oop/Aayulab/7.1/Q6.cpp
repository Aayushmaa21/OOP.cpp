#include <iostream>
using namespace std;

// ================= FUNCTION TEMPLATE =================

template <class T>
void swapTemplate(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}


// ================= FUNCTION OVERLOADING =================

void swapOverload(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapOverload(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

void swapOverload(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}


int main()
{
    // -------- Template --------

    int a = 10, b = 20;
    float x = 1.5f, y = 2.5f;
    char p = 'A', q = 'B';

    swapTemplate(a, b);
    swapTemplate(x, y);
    swapTemplate(p, q);

    cout << "Using Template:" << endl;
    cout << "Int: " << a << " " << b << endl;
    cout << "Float: " << x << " " << y << endl;
    cout << "Char: " << p << " " << q << endl;


    // -------- Overloading --------

    int c = 30, d = 40;
    float m = 3.5f, n = 4.5f;
    char r = 'X', s = 'Y';

    swapOverload(c, d);
    swapOverload(m, n);
    swapOverload(r, s);

    cout << "\nUsing Function Overloading:" << endl;
    cout << "Int: " << c << " " << d << endl;
    cout << "Float: " << m << " " << n << endl;
    cout << "Char: " << r << " " << s << endl;

    return 0;
}