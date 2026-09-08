#include <iostream>
#include <string>
using namespace std;

class Bank
{
private:
    string name;
    int accountNumber;
    float balance;

public:
    // Default constructor
    Bank()
    {
        name = "Yuna";
        accountNumber = 0;
        balance = 0;
    }

    // Parameterized constructor
    Bank(string n, int acc, float bal)
    {
        name = n;
        accountNumber = acc;
        balance = bal;
    }

    // Copy constructor
    Bank(Bank &b)
    {
        name = b.name;
        accountNumber = b.accountNumber;
        balance = b.balance;
    }

    // Deposit function
    void deposit(float amount)
    {
        balance = balance + amount;
    }

    // Withdraw function
    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Display function
    void display()
    {
        cout << "\nAccount Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    // Destructor
    ~Bank()
    {
        cout << "BankAccount object destroyed." << endl;
    }
};

int main()
{
    // Object using default constructor
    Bank b1;
    cout << "Account 1:" << endl;
    b1.display();

    // Object using parameterized constructor
    Bank b2("Aayushma", 1001, 50000);
    cout << "\nAccount 2:" << endl;
    b2.display();

    // Deposit and withdraw
    b2.deposit(10000);
    b2.withdraw(5000);

    cout << "\nAccount 2 after transactions:" << endl;
    b2.display();

    // Object using copy constructor
    Bank b3(b2);
    cout << "Account 3 (Copied from Account 2):" << endl;
    b3.display();

    return 0;
}