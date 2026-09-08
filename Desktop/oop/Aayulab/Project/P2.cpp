#include<iostream>
using namespace std;

class Bank{
private:
    int acc_no;
    string acc_holder_name;
    float acc_balance;

public:
    void input(){
        cout<<"Enter you bank details"<<endl;
        cout<<"Enter acc_no: ";
        cin>>acc_no;
        cout<<"Enter account holder's name"<<endl;
        cin>>acc_holder_name;
        cout<<"Enter opening account balance"<<endl;
        cin>>acc_balance;
    }

    void deposit();
    void withdraw();

    void details(){
        cout<<"Account number: "<<acc_no<<endl;
        cout<<"Account holder name: "<<acc_balance<<endl;
        cout<<"Current balance: "<<acc_balance<<endl;
    }
    int getAccountNo()
    {
        return acc_no;
    }
};


//Outside the class
void Bank ::deposit(){
    float deposit;
    cout<<"Enter balance to deposit: "<<endl;
    cin>>deposit;
    acc_balance = acc_balance + deposit;
    cout<<"Balance Deposited Sucessfully";
}

void Bank ::withdraw(){
    float wd;
    cout<<"Enter balance to withdraw: "<<endl;
    cin>>wd;
    if(wd<acc_balance){
    acc_balance = acc_balance - wd;
    cout<<"Balance Withdrawn Sucessfully";}
    else{
        cout<<"Insufficient Balance";
    }
}


int main(){
    int n;
    cout<<"Enter number of accounts to be created"<<endl;
    cin>>n;
    Bank *b = new Bank[n];

    for(int i = 0; i < n ; i++){
        b[i].input();
    }
     int number;
    int choice;
    float amount;

    cout << "Enter account number: ";
    cin >> number;  
    for (int i = 0; i < n; i++)
    {
        if (b[i].getAccountNo() == number)
        {
            cout << "1.Deposit"<<endl;
            cout << "2.Withdraw"<<endl;
            cout << "Enter choice: "<<endl;
            cin >> choice;


            if (choice == 1)
            {
                b[i].deposit();
            }
            else if (choice == 2)
            {
                b[i].withdraw();
            }
            else
            {
                cout << "Invalid choice!";
            }

            break;
        }
    }

    for(int i = 0; i<n;i++){
        cout<<"Account details "<<i+1<<endl;
        b[i].details();
    }
    delete[] b;
  return 0;  
}