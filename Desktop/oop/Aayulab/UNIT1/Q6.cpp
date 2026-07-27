#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string N1, N2, N3;
    float P1, P2, P3;
    int Qty1, Qty2, Qty3;

    cout << "Enter details of Product 1: ";
    cin >> N1 >> P1 >> Qty1;

    cout << "Enter details of Product 2: ";
    cin >> N2 >> P2 >> Qty2;

    cout << "Enter details of Product 3: ";
    cin >> N3 >> P3 >> Qty3;

    cout << endl;
    cout << setw(15) << "Product"
         << setw(15) << "Price"
         << setw(15) << "Quantity"
         << setw(15) << "Total" << endl;

    cout << setw(15) << N1
         << setw(15) << P1
         << setw(15) << Qty1
         << setw(15) << fixed << setprecision(2)<< P1 * Qty1 << endl;

    cout << setw(15) << N2
         << setw(15) << P2
         << setw(15) << Qty2
         << setw(15) << fixed << setprecision(2)<< P2 * Qty2 << endl;

    cout << setw(15) << N3
         << setw(15) << P3
         << setw(15) << Qty3
         << setw(15) << fixed << setprecision(2)<< P3 * Qty3 << endl;

         
    return 0;
}