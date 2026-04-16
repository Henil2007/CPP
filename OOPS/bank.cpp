#include <iostream>
#include <string>
using namespace std;

bool isValidPassword(string pass)
{
    if(pass.length() < 8)
        return false;

    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;

    for(char ch : pass)
    {
        if(islower(ch)) 
        {
            hasLower = true;
        }
        else if(isupper(ch))
        {
            hasUpper = true;
        }
        else if(isdigit(ch)) 
        {
            hasDigit = true;
        }
        else 
        {
            hasSpecial = true;
        }
    }

    return hasLower && hasUpper && hasDigit && hasSpecial;
}

class account 
{
private : 
    int accno; 
    string password;
    float balance; 

public : 
    account(int accno , string password, float balance)
    {
        this->accno = accno;
        this->password = password;
        this->balance = balance;
    }

    bool login(int acc, string passw)
    {
        return (accno == acc && password == passw);
    }

    void set_password(string new_password)
    {
        if(isValidPassword(new_password))
        {
            password = new_password;
            cout<<"Password changed successfully!\n";
        }
        else
        {
            cout<<"Invalid Password!\n";
            cout<<"Password must contain:\n";
            cout<<"- At least 1 lowercase\n- 1 uppercase\n- 1 digit\n- 1 special character\n";
            cout<<"- Minimum length 8\n";
        }
    }

    float get_balance()
    {
        return balance;
    }

    void deposit(float amt)
    {
        balance += amt;
        cout<<"Deposited: "<<amt<<endl;
    }

    void withdraw(float amt)
    {
        if(balance - amt >= 10000)
        {
            balance -= amt;
            cout<<"Withdrawn: "<<amt<<endl;
        }
        else 
        {
            cout<<"Minimum balance of 10000 must be maintained!\n";
        }
    }

    friend void show_details(account acc);
};

void show_details(account acc)
{
    cout<<"Account Number: "<<acc.accno<<endl;
    cout<<"Balance: "<<acc.balance<<endl;
}

class bank : public account
{
public : 
    bank(int accno , string password, float balance)
        : account(accno,password,balance)
    {
    }
};

int main()
{
    int acc; 
    string passw; 

    bank b1(1234,"nirmit1610",25000);  // strong default password

    cout<<"===== BANK SYSTEM ====="<<endl;
    cout<<"Enter Account Number: ";
    cin>>acc;

    cout<<"Enter Password: ";
    cin>>passw;

    if(b1.login(acc,passw))
    {
        int choice; 
        float amt; 
        string new_password; 

        do{
            cout<<"\n--- MENU ---\n";
            cout<<"1. Show Details\n";
            cout<<"2. Change Password\n";
            cout<<"3. Show Balance\n";
            cout<<"4. Deposit\n";
            cout<<"5. Withdraw\n";
            cout<<"6. Exit\n";
            cout<<"Enter your choice: ";
            cin>>choice;

            switch(choice)
            {
                case 1 : 
                    show_details(b1);
                    break;

                case 2 : 
                    do {
                        cout<<"Enter new password: ";
                        cin>>new_password;

                        if(isValidPassword(new_password))
                        {
                            b1.set_password(new_password);
                            break;
                        }
                        else
                        {
                            cout<<"Weak password! Try again.\n";
                        }
                    } while(true);
                    break;

                case 3 : 
                    cout<<"Balance: "<<b1.get_balance()<<endl;
                    break;

                case 4 : 
                    cout<<"Enter deposit amount: ";
                    cin>>amt;
                    b1.deposit(amt);
                    break;

                case 5 : 
                    cout<<"Enter withdraw amount: ";
                    cin>>amt;
                    b1.withdraw(amt);
                    break;

                case 6 : 
                    cout<<"Thank you for using our services!\n";
                    break;

                default :
                    cout<<"Invalid choice\n";
            }

        } while(choice != 6);
    }
    else 
    {
        cout<<"Wrong Account Number or Password!\n";
    }

    return 0; 
}