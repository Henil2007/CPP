/*
Que :1. EMPLOYEE MANAGEMENT SYSTEM   (Compulsory)

Objective: Develop an Employee Management System using Structure,
Pointer, Functions, and Array.

Requirements:

Create a menu-driven C++ program that performs the following operations:

1.  Add Employee
    -   Store employee details such as: • Name • Age • Salary
    -   Use an array of structures.
    -   Use a pointer to keep track of the total number of employees.
2.  Delete Employee
    -   Delete employee using Name only (NOT using ID).
    -   If the name matches, remove that employee.
    -   After deletion, shift remaining records properly.
3.  Display Employees
    -   Display all employee details.
    -   If no employee exists, show a proper message.

Constraints: - Use struct to define Employee. - Use array to store
multiple employees. - Use pointer (e.g., int *count) to manage number of
employees. - Implement exactly 3 functions only: addEmployee()
deleteEmployee() displayEmployee()

*/

#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int age;
    float salary;
};

const int SIZE = 100;

void addEmployee(Employee emp[], int *count) {
    if (*count >= SIZE) {
        cout << "Employee list is full!\n";
        return;
    }

    cout << "Enter Name: ";
    cin >> emp[*count].name;
    cout << "Enter Age: ";
    cin >> emp[*count].age;
    cout << "Enter Salary: ";
    cin >> emp[*count].salary;

    (*count)++;
    cout << "Employee Added Successfully!\n";
}

void deleteEmployee(Employee emp[], int *count) {
    if (*count == 0) {
        cout << "No employees to delete!\n";
        return;
    }

    string name;
    cout << "Enter Name to Delete: ";
    cin >> name;

    int index = -1;
    for (int i = 0; i < *count; i++) {
        if (emp[i].name == name) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Employee Not Found!\n";
        return;
    }

    for (int i = index; i < *count - 1; i++) {
        emp[i] = emp[i + 1];
    }

    (*count)--;
    cout << "Employee Deleted Successfully!\n";
}

void displayEmployee(Employee emp[], int *count) {
    if (*count == 0) {
        cout << "No employees available!\n";
        return;
    }

    for (int i = 0; i < *count; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Name: " << emp[i].name << endl;
        cout << "Age: " << emp[i].age << endl;
        cout << "Salary: " << emp[i].salary << endl;
    }
}

int main() {
    Employee emp[SIZE];
    int count = 0;
    int choice;

    do {
        cout << "\n---- Employee Management System ----\n";
        cout << "1. Add Employee\n";
        cout << "2. Delete Employee\n";
        cout << "3. Display Employees\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addEmployee(emp, &count); break;
            case 2: deleteEmployee(emp, &count); break;
            case 3: displayEmployee(emp, &count); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}