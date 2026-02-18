#include <iostream>
using namespace std;
class Person
{
    public:
        Person()
        {
            cout<<endl<<"Default const. of Person";
        }
        void displayPerson()
        {
            cout<<endl<<"Display of person class";
        }
};
class Student : virtual public Person
{
    public:
        Student()
        {
            cout<<endl<<"Default const. of student";
        }
        void displayStudent()
        {
            cout<<endl<<"Display of student class";
        }
};
class Employee : public virtual Person
{
    public: 
        Employee()
        {
            cout<<endl<<"Default const. of employee";
        }
        void displayEmployee()
        {
            cout<<endl<<"Display the employee class";
        }
};
class StudentEmployee : public Employee , public Student
{
    public:
        StudentEmployee()
        {
            cout<<endl<<"Default const. of student and employees";
        }
        void displayStudentEmployee()
        {
            cout<<endl<<"Display of student employee";
        }
};
int main() 
{
    StudentEmployee s;
    s.displayPerson();
    s.displayEmployee();
    s.displayStudent();
    s.displayStudentEmployee();
    return 0;
}