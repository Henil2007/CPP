/*
ROYAL KID BANK : 

1. create  username and password . 
2. login   ==> it is  compuslory  . if login success then 25000 rs cr in user account.
               if log in fail then direct  exit. 
    if login successfull then display below function  like  : 
        1. deposit 
        2. withdraw
        3. balance
        4. exit

condition  : for withdraw : ==> you have maintain 10000 rs in your account . 
            means : if  your balance  is 35000 and  your withdraw amt is  30000 then  you can't withdraw  30000 rs. because  you have  only  10000 rs in your account.

        balance  25000 
        deposit  : 10000   total balance  : 35000 
        withdraw : 30000   

task   :1  user have max 3 attempt for  login. 
task   :2  if user  choose withdraw  then ask user to enter  pin and also verify the pin. 
*/

#include <iostream>
using namespace std;

string suser , spassword;
int balance = 25000;

bool login()
{
    string user,password;
    cout<<"Enter user name : ";
    cin>>user;
    cout<<"Enter password : ";
    cin>>password;

    if(suser == user && spassword == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void deposit()
{
    int amt;
    cout<<"Enter amount you want to add : ";
    cin>>amt;

    balance += amt;
    cout<<"Your deposit amount is : "<<amt<<endl;
}

int withdraw()
{
    int amt,pin,vpin;
    cout<<"Enter amount you want to remove : ";
    cin>>amt;
    cout<<"Enter pin : ";
    cin>>pin;
    cout<<"Enter verification pin : ";
    cin>>vpin;

    if(pin == vpin)
    {
        if(balance - amt >= 10000)
        {
            balance -= amt;
            cout<<"Your withdraw amount is : "<<amt<<endl;
        }
        else
        {
            cout<<"Minimum balance require 10000"<<endl;
        }
    }
    else
    {
        cout<<"Invalid Varification pin..."<<endl;
        return 1;
    }

}

void checkbalance()
{
    cout<<"Your balance is : "<<balance<<endl;
}
int main() 
{
    int choice;
    int attempt = 0;

    cout<<"ROYAL KID BANK"<<endl;
    
    cout<<"Enter the username : ";
    cin>>suser;
    cout<<"Enter the password : ";
    cin>>spassword;

    while (attempt < 3)
{
    if (login())
    {
        cout << "Login successful" << endl;
        break;
    }
    else
    {
        cout << "Login failed" << endl;
        attempt++;
    }
}

if (attempt == 3)
{
    cout << "Too many failed attempts. Exiting..." << endl;
    return 0;
}

    while (true)
    {
        cout<<"==============Menu==========="<<endl;
        cout<<"\n1. Deposit";
        cout<<"\n2. Withdraw";
        cout<<"\n3. Balance";
        cout<<"\n4. Exit";
        cout<<"\nEnter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                deposit();
                break;  
            case 2:
                withdraw();     
                break;
            case 3:
                checkbalance();
                break;
            case 4:
                cout<<"Thank you for using Royal Kid Bank"<<endl;
                exit(0);
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}