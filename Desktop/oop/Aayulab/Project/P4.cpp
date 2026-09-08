#include <iostream>
using namespace std;

class Account
{
private:
    int acc_no;
    string name;
    float balance;
    static int totalAccounts;

public:

    // Parameterized constructor
    Account(int no, string n, float b)
    {
        this->acc_no = no;
        this->name = n;
        this->balance = b;
        totalAccounts++;
    }

    // Copy constructor
    Account(const Account &a)
    {
        acc_no = a.acc_no;
        name = a.name;
        balance = a.balance;
        totalAccounts++;
    }

    // Static function
    static void showTotal()
    {
        cout << "Total Accounts: " << totalAccounts << endl;
    }

    // Friend function
    friend void display(const Account &a); //refrence to avoid copies

    // Friend function for adding balance
    friend Account& addBalance(Account &a);
};

// Initialize static member
int Account::totalAccounts = 0;


// Display account details
void display(const Account &a)
{
    cout << "Account No: " << a.acc_no << endl;
    cout << "Name: " << a.name << endl;
    cout << "Balance: " << a.balance << endl;
}


// Pass and return object by ref
Account& addBalance(Account &a)
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


    // Pass and return object by ref
    Account a3 = addBalance(a1);

    cout << "\nAccount 3:" << endl;
    display(a3);


    // Total accounts
    cout << endl;
    Account::showTotal();

    return 0;
}