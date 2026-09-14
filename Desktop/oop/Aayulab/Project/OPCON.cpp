#include <iostream>
using namespace std;

class Currency
{
    float amount;

public:
    // Basic to user-defined
    Currency(float x)
    {
        amount = x;
    }

    // User-defined to basic
    operator float()
    {
        return amount;
    }

    // User-defined to user-defined
    Currency toEUR()
    {
        return Currency(amount * 0.92);
    }

    void display()
    {
        cout << amount << endl;
    }
};

int main()
{
    // float -> Currency
    float x = 100;
    Currency usd = x;

    cout << "USD: ";
    usd.display();

    // Currency -> float
    float y = usd;
    cout << "Float: " << y << endl;

    // Currency USD -> Currency EUR
    Currency eur = usd.toEUR();

    cout << "EUR: ";
    eur.display();

    return 0;
}