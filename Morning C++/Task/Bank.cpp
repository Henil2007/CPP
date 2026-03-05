#include<iostream>
#include<string.h>
// #include<conio.h>
using namespace std;

class Bank{
    char adminUser[30],adminPass[30];
    char bankName[30];
    int bID;

public:
    Bank(){
        strcpy(adminUser,"admin");
        strcpy(adminPass,"admin");
    }

    void scanBankDetails();
    void displayBankDetails();
    int login(char userName[],char password[]);
    void adminMenu();
};

void Bank::scanBankDetails(){
    cout<<"\nEnter the bank id: ";
    cin>>bID;
    cout<<"\nEnter the bank name: ";
    cin>>bankName;
}

void Bank::displayBankDetails(){
    cout<<"\nBank ID: "<<bID;
    cout<<"\nBank Name: "<<bankName;
}

int Bank::login(char userName[],char password[]){
    if(strcmp(adminUser,userName)==0 && strcmp(adminPass,password)==0)
        return 1;
    else
        return -1;
}

void Bank::adminMenu(){
    cout<<"\n1----Create Customer";
    cout<<"\n2----Display Customer";
    cout<<"\n3----Deposit";
    cout<<"\n4----Withdraw";
    cout<<"\n5----Exit";
}

class Customer{
    int custID;
    char custName[30];
    char custUser[30],custPassword[30];
    float balance,depositAmt,withdrawAmt;

public:
    Customer(){
        strcpy(custUser,"cust");
        strcpy(custPassword,"cust");
        balance=10000;
    }

    void scanCustomerDetails();
    void displayCustomerDetails();
    void depositAmount();
    void withdrawAmount();
    int login(char cUser[],char cPassword[]);
    void custMenu();
};

void Customer::scanCustomerDetails(){
    cout<<"\nEnter the cust id: ";
    cin>>custID;
    cout<<"\nEnter the cust name: ";
    cin>>custName;
}

void Customer::displayCustomerDetails(){
    cout<<"\nCustomer ID: "<<custID;
    cout<<"\nCustomer Name: "<<custName;
    cout<<"\nBalance: "<<balance;
}

void Customer::depositAmount(){
    cout<<"\nEnter deposit amount: ";
    cin>>depositAmt;
    balance = balance + depositAmt;
}

void Customer::withdrawAmount(){
    cout<<"\nEnter withdraw amount: ";
    cin>>withdrawAmt;

    if(withdrawAmt > balance)
        cout<<"\nInsufficient Balance!";
    else
        balance = balance - withdrawAmt;
}

int Customer::login(char cUser[],char cPassword[]){
    if(strcmp(custUser,cUser)==0 && strcmp(custPassword,cPassword)==0)
        return 1;
    else
        return -1;
}

void Customer::custMenu(){
    cout<<"\n1----Deposit";
    cout<<"\n2----Withdraw";
    cout<<"\n3----Display Details";
    cout<<"\n4----Exit";
}

int main(){
    // clrscr();

    Bank b;
    Customer c;

    char user[30],pass[30];
    int choice;

    cout<<"Enter Admin Username: ";
    cin>>user;
    cout<<"Enter Admin Password: ";
    cin>>pass;

    if(b.login(user,pass)==1){
        cout<<"\nLogin Successful!";
        b.scanBankDetails();

        do{
            b.adminMenu();
            cout<<"\nEnter choice: ";
            cin>>choice;

            switch(choice){
                case 1: c.scanCustomerDetails();
                        break;

                case 2: c.displayCustomerDetails();
                        break;

                case 3: c.depositAmount();
                        break;

                case 4: c.withdrawAmount();
                        break;

                case 5: break;

                default: cout<<"\nInvalid Choice!";
            }
        }while(choice!=5);
    }
    else{
        cout<<"\nInvalid Admin Login!";
    }
    return 0;
    // getch();
}