
#include <iostream>
using namespace std;

// Base class
class Payment {
public:
    virtual void processPayment() =0;
};

// Derived class
class CreditCard : public Payment {
public:
    void processPayment() override {
        cout << "Processing payment through Credit Card." << endl;
    }
};

// Derived class
class Cash : public Payment {
public:
    void processPayment() override {
        cout << "Processing payment through Cash." << endl;
    }
};

int main() {
    Payment *p;

    CreditCard card;
    Cash cash;

    // Base pointer pointing to CreditCard
    p= &card;
    p->processPayment();

    // Base pointer pointing to Cash
    p = &cash;
    p->processPayment();

    return 0;
}
