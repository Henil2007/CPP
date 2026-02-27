#include <iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;
class Bank
{
    int custId;
    string custName;
    float balance, deposite, withdraw;

public:
    Bank()
    {
        cout << endl
             << "THe default constructor called and balance inititalised.";
        balance = 10000;
    }
    void withdrawAmount();
    void depositeAmount();
    void checkBalance();
    void scanCustomerDetails();
};
void Bank::scanCustomerDetails()
{
    cout << endl
         << "Enter the Cuntomber ID : ";
    cin >> custName;
    cout << endl
         << "Enter the cuntomber Name : ";
    cin >> custName;
}
void Bank::withdrawAmount()
{
    float tempbalance;

    cout << "Enter the withdrawl amount : ";
    cin >> withdraw;
    tempbalance = balance - withdraw;
    if (withdraw <= 0)
    {
        cout << endl
             << "This tranction cannot be performed : ";
    }
    else if (tempbalance <= 10000)
    {
        cout << endl
             << "Insufficient balance...";
    }
    else
    {
        cout << endl
             << "Net balance left after withdrawl is : " << tempbalance;
    }
}
void Bank::depositeAmount()
{
    cout << endl
         << "Enter the deposite amount : ";
    cin >> deposite;
    if (deposite <= 0)
    {
        cout << endl
             << "The amount deposite cannot be possible...";
    }
    else
    {
        balance = balance + deposite;
    }
}
void Bank::checkBalance()
{
    cout << endl
         << "CounstId" << endl
         << "Name" << endl
         << "Balance";
    cout << endl
         << custId << endl
         << custName << endl
         << balance;
}
int main()
{
    int choice;
    Bank B;
    while (true)
    {
        cout << endl
             << "1. Scan Customber Details";
        cout << endl
             << "2. Deposite";
        cout << endl
             << "3. Withdrawl";
        cout << endl
             << "4. Check Balance";
        cout << endl
             << "5. Exit";
        cout << endl
             << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            B.scanCustomerDetails();
            break;
        case 2:
            B.depositeAmount();
            break;
        case 3:
            B.withdrawAmount();
            break;
        case 4:
            B.checkBalance();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << endl
                 << "Enter a valid choice...";
        }
    }
    return 0;
}