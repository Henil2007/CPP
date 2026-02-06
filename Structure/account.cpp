/*
task :2   array  with  structure 
    srno   name   accno   balance 
    1      nirmit 345      200 
    2      ketan  457      400
    3      jaimin 890      2000
    4      henil  123      1500 

    condition : 
    1. display  only those cutomer name  which have balance less then 500rs. 
    2. if customer balance if more than  500 then  add 1000 rs in their  balance  and  print update balance  with name. 
*/
#include <iostream>
using namespace std;

struct account
{
    int srno=1,acc,balance;
    string name;
}a[4];

void addAcount()
{
    cout<<a->srno;
    cout<<endl<<"Enter Name : ";
    cin>>a->name;
    cout<<endl<<"account No. : ";
    cin>>a->acc;
    cout<<endl<<"Enter balance : ";
    cin>>a->balance;
    a->srno++;
}

void display()
{
    cout<<"srNo.\tName\tAcc No.\tbalance"<<endl;
    for(int i=0;i<a->srno-1;i++)
    {
        if (a->balance < 500)
        {
            cout<<a->srno<<"\t"<<a->name<<"\t"<<a->acc<<"\t"<<a->balance<<endl;
        }
        else
        {
            a->balance += 1000;
        }
    }
}

int main() 
{
    int choice;
    while (true)
    {
        cout<<"1. Add Account"<<endl;
        cout<<"2. Display Account"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter your choice : ";
           cin>>choice;
           switch(choice)
           {
               case 1:
                   addAcount();
                   break;
               case 2:
                   display();
                   break;
               case 3:
                   exit(0);
               default:
                   cout<<"Invalid choice"<<endl;
           }
    //    return 0;       
    }
    return 0;
    
}