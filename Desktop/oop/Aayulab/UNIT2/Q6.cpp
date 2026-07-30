#include <iostream>
using namespace std;

int num = 100;   // Global variable (used with extern)

void demoStatic() {
    static int count = 0;   // Static variable
    count++;
    cout << "Static count = " << count << endl;
}

int main() {
    int a = 10;        
    extern int num;
    cout << "Auto variable = " << a << endl;
    cout << "Extern variable = " << num << endl;

    cout << "\nCalling function:\n";
    demoStatic();
    demoStatic();
    demoStatic();

    return 0;
}