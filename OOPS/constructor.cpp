#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class Bank
{
    private:
        string ac_holder_name; 
        string bank_name; 
        double ac_number; 
        string branch; 
        int balance;
        int pin;
        string adminUser , adminPassword;
    
    public:

        Bank()
        {
            int attempt = 3;
            string username , password;
            
            adminUser = "admin";
            adminPassword = "admin";
            
            
            while (attempt != 0)
            {
                cout<<"Enter user name : ";
                cin>>username;
                
                cout<<"Enter password : ";
                cin>>password;
                
                if(username == adminUser && password == adminPassword)
                {
                    cout<<"Login sucessfull"<<endl;
                    break;
                }
                else
                {
                    attempt--;
                    if(attempt == 0)
                    {
                        exit(0);
                    }
                }
            }
            
        } // End of default constructor

        void openAccount()
        {
            cout<<"Enter bank Name : ";
            cin>>bank_name;
            cout<<"Enter branch name : ";
            cin>>branch;
            cout<<"Enter Account holder name : ";
            cin>>ac_holder_name;
            cout<<"Enter account number : ";
            cin>>ac_number;
            cout<<"Enter debit and credit pin : ";
            cin>>pin;

            balance = 1000;
            cout<<"Account Created sucessfully..."<<endl;
        } // End of add account function
        void deposit()
        {
            int amount , vpin;
            
            for(int i=0;i<3;i++)
            {
                cout<<"Enter varification pin : ";
                cin>>vpin;

                if(vpin == pin)
                {
                    cout<<"Enter deposit amount : ";
                    cin>>amount;
        
                    if(amount <= 0)
                    {
                        cout<<"Please enter a valid amount..."<<endl;
                    }
                    balance = amount + balance;
                    cout<<"Amount deposited sucessfully..."<<endl;
                    break;
                } // End of Pin verification

            } // End of loop

        } // End of deposit account

        void withDraw()
        {
            int amount,vpin;

            for(int i=0;i<3;i++)
            {
                cout<<"Enter varification pin : ";
                cin>>vpin;

                if(vpin == pin)
                {
                    cout<<"Enter withdarw  amount : ";
                    cin>>amount;
        
                    if(amount >= 0 && amount < balance)
                    {
                        balance = balance - amount;
                    } // end of if
                    else
                    {
                        cout<<"Insufficient amount"<<endl;
                    } // End of else
                    break;
                } // End of pin verification

            } // End of loop

        } // End of withdraw function

        void checkBalance()
        {
            cout<<"Balance is : "<<balance<<endl;
        } // End of check balance function

        void accountDetails()
        {
            cout<<"bank name is : "<<bank_name<<endl;
            cout<<"branch is : "<<branch<<endl;
            cout<<"ac holder name is : "<<ac_holder_name<<endl;
            cout<<"ac number is : "<<ac_number<<endl;
            cout<<"balance is : "<<balance<<endl;
        } // End of account details function

}; // End of bank class

int main() 
{
    int choice;
    Bank acc;

    // acc.login();

    while (true)
    {
        cout<<"1. Open Account"<<endl;
        cout<<"2. Deposit amount"<<endl;
        cout<<"3. Withdraw amount"<<endl;
        cout<<"4. Check balance"<<endl;
        cout<<"5. Account details"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1 : acc.openAccount();
            break;
            case 2 : acc.deposit();
            break;
            case 3 : acc.withDraw();
            break;
            case 4 : acc.checkBalance();
            break;
            case 5 : acc.accountDetails();
            break;
            case 6 : exit(0);
            
            default : cout<<"Enter a valid choice..."<<endl;
        } // End of switch
    
    } // end of while
    
    return 0;
} // End of main function