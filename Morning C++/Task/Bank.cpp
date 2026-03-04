#include <iostream>
using namespace std;
int main() 
{
    int choice;

    while (true)
    {
        cout<<"1. Admin Login"<<endl;
        cout<<"2. Customer Login"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter the choice : ";
        cin>>choice;
        // break;
        switch(choice)
        {
            case 1 : cout<<"1. Create new customer"<<endl;
                     cout<<"2. Display all Customer"<<endl;
                     cout<<"3. Display Particular customer"<<endl;
                     cout<<"4. Delete customer"<<endl;
                     cout<<"5. Exit"<<endl;
                     break;
            case 2 : cout<<"1. Deposit"<<endl;
                     cout<<"2. Withdrawl"<<endl;
                     cout<<"3. CheckBalance"<<endl;
                     cout<<"4. Exit"<<endl;
                     cout<<"Enter your choice : ";
                     cin>>choice;
        }
    }
    
    return 0;
}