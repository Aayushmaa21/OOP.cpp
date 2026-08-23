#include <iostream>
using namespace std;

class Test
{
public:
    int x;

    Test(int a = 10)
    {
        x = a;
    }

    // ---------------------------------------------------------
    // Operators that CANNOT be overloaded in C++
    // ---------------------------------------------------------

    // 1. Scope Resolution Operator (::)
    // ---------------------------------------------------------
    // The scope resolution operator is used to specify the
    // scope of a class, function, variable, or namespace.
    //
    // Example:
    // Test::x
    //
    // Its meaning is fixed by the C++ language, so it cannot
    // be overloaded.


    // 2. sizeof Operator
    // ---------------------------------------------------------
    // The sizeof operator is used to find the size of a data
    // type or object in bytes.
    //
    // Example:
    // sizeof(int)
    //
    // It is evaluated by the compiler and its behavior cannot
    // be changed by operator overloading.


    // 3. Ternary (Conditional) Operator (?:)
    // ---------------------------------------------------------
    // The ?: operator is used to select one of two values
    // depending on a condition.
    //
    // Example:
    // result = (x > 0) ? x : -x;
    //
    // The conditional operator cannot be overloaded in C++.


    // 4. Member Access Operator (.)
    // ---------------------------------------------------------
    // The . operator is used to access members of an object.
    //
    // Example:
    // object.x
    //
    // The . operator cannot be overloaded because its operation
    // is directly defined by the C++ language.


    // 5. Pointer-to-Member Access Operator (.*)
    // ---------------------------------------------------------
    // The .* operator is used to access a class member through
    // a pointer-to-member.
    //
    // This operator also cannot be overloaded in C++.
};

int main()
{
    Test obj;

    cout << "Value of x = " << obj.x << endl;

    cout << "\nOperators that cannot be overloaded in C++:\n";
    cout << "1. Scope Resolution Operator (::)\n";
    cout << "2. sizeof Operator\n";
    cout << "3. Ternary Operator (?:)\n";
    cout << "4. Member Access Operator (.)\n";
    cout << "5. Pointer-to-Member Access Operator (.*)\n";

    return 0;
}
