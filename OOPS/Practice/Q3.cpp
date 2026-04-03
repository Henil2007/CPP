/*
Que 3. Write a program to demonstrate constructor calling order in single inheritance. Create a
base class Base with a constructor and a derived class Derived with its own constructor. Print
messages to show the order of constructor execution
*/

#include <iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Default Base class constructor called"<<endl;
    }
};
class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"Default derived class constructor called"<<endl;
    }
};
int main() 
{
    Derived D;
    return 0;
}