//Create a formatted markshhet
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
     float math = 90.76, OOP = 85.5, stat = 88.25;

    cout << "Subject" << setw(10) << "Marks" << endl;

    cout << "Math" << setw(10) << fixed << setprecision(2) << math << endl;
    cout << "OOP" << setw(10) << fixed << setprecision(2) << OOP << endl;
    cout << "Stat" << setw(10) << fixed << setprecision(2) << stat << endl;





    return 0;
}