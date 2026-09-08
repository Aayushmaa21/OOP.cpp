
#include <iostream>
using namespace std;

class Account
{
private:
    int acc_no;
    string name;
    float balance;

    // Static data member
    static int totalAccounts;

public:

    // Constructor
    Account(int no, string n, float b)
    {
        this->acc_no = no;
        this->name = n;
        this->balance = b;

        totalAccounts++;
    }
    // Static function
    static void showTotal()
    {
        cout << "Total Accounts: " << totalAccounts << endl;
    }

    // Friend function
    friend void display(Account a);
    friend Account addbalance(Account &a);
};

// Initialize static data member
int Account::totalAccounts = 0;


// Friend function
void display(Account a)
{
    cout << "Account No: " << a.acc_no << endl;
    cout << "Name: " << a.name << endl;
    cout << "Balance: " << a.balance << endl;
}


// Function that passes and returns an object
Account addbalance(Account &a)
{
    a.balance = a.balance + 1000;
    return a;
}


int main()
{
    // Object initialization
    Account a1(101, "Aayu", 5000);

    cout << "Account 1:" << endl;
    display(a1);

    // Copy initialization
    Account a2 = a1;

    cout << "\nAccount 2 (Copy):" << endl;
    display(a2);

    // Function passing and returning object
    Account a3 = addbalance(a1);

    cout << "\nAccount 3:" << endl;
    display(a3);

    // Display total accounts
    cout << endl;
    Account::showTotal();

    return 0;
}

