#include <iostream>
#include<string.h>
using namespace std;
struct employee
{
    int eid;
    string name;
    float salary;
};

int main() 
{
    employee e[5];
    employee *p = e;
    int i;
    // int max = (p+1)->salary;
    for(i=0;i<5;i++)
    {
        cout<<"Enter Employee Id : ";
        cin>>(p+i)->eid;
        cout<<"Enter Name : ";
        cin>>(p+i)->name;
        cout<<"Enter Salary : ";
        cin>>(p+i)->salary;
    }

    int max = 0;

    for(int i = 1; i < 5; i++)
    {
        if((p + i)->salary > (p + max)->salary)
        {
            max = i;
        }
    }

    cout << "\nEmployee with Highest Salary:\n";
    cout << "Employee ID: " << (p + max)->eid << endl;
    cout << "Name: " << (p + max)->name << endl;
    cout << "Salary: " << (p + max)->salary << endl;

    return 0;
}