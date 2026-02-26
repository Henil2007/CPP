// emp manag system  :
/*
1.add emp
2.update emp
3.delete emp
4.search emp
5.display emp
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#define max 100

using namespace std;
struct Employee
{
    int id;
    string name;
    float salary;
};

void addEmployee(struct Employee *e, int *count)
{
    if (*count > max)
    {
        cout << endl
             << "Employee list is full...";
        return;
    }
    cout << "Enter employee ID : ";
    cin >> e[*count].id;
    cout << "Enter employee name : ";
    cin >> e[*count].name;
    cout << "Enter Salary : ";
    cin >> e[*count].salary;
    *(count)++;
    cout << "Employee Added sucessfully";
} // End of Add Function

void updateEmployee(struct Employee *e, int *count)
{
    int id;
    int found = 0;
    cout << endl
         << "Enter employees ID : ";
    cin >> id;

    for (int i = 0; i < *count; i++)
    {
        if (e[i].id == id)
        {
            cout << "Enter employee name : ";
            cin >> e[i].name;
            cout << "Enter employee salary : ";
            cin >> e[i].salary;

            found = 1;
            break;
        } // End of If
    } // End of For
    if (found == 0)
    {
        cout << "Employee not found";
    }
} // End of Update function

void searchEmployee(struct Employee *e, int *count)
{
    int id, found = 0;
    int i;

    cout << endl
         << "Enter employees ID : ";
    cin >> id;

    for (int i = 0; i < *count; i++)
    {
        if (e[i].id == id)
        {
            cout << "Employee name : " << e[i].name;
            cout << "Employee salary : " << e[i].salary;

            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        cout << "Employee not found";
    }
} // End of Search function

void deleteEmployee(struct Employee *e, int *count)
{
    int  id,found=0;
    cout<<"enter the emp id to delete : ";
    cin>>id; 
    for(int i=0; i<*count; i++)
    {
        if(e[i].id ==id)
        {      // shifting the elements to left
                for(int j =i; j<*count-1; j++)
                {
                    e[j] = e[j+1];
                }
                *(count)--;
                found =1;
                cout<<"emp deleted"<<endl;
                break;
        } 
    }
} // End of delete function

void displayEmployee(struct Employee *e, int *count)
{
    int i, found = 0;
    cout << endl
         << "Eid\tName\tSalary";

    for (i = 0; i < *count; i++)
    {
        cout << endl
             << e[i].id << "\t" << e[i].name << "\t" << e[i].salary;
        // found = 1;
    }
} // End of Display function

int main()
{
    int choice;
    struct Employee e[max];
    int count = 0;

    while (true)
    {

        cout << endl
             << "1. Add Employee" << endl;
        cout << "2. Update Employee." << endl;
        cout << "3. Search Employee." << endl;
        cout << "4. Delete Employee." << endl;
        cout << "5. Display Employee." << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addEmployee(e, &count);
            break;
        case 2:
            updateEmployee(e, &count);
            break;
        case 3:
            searchEmployee(e, &count);
            break;
        case 4:
            deleteEmployee(e, &count);
            break;
        case 5:
            displayEmployee(e, &count);
            break;
        case 6:
            exit(0);
        }
    }
    return 0;
} // End of main()