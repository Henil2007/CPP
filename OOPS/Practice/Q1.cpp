/*
Que 1. Define a base class Animal with a constructor and a method speak(). Derive a class Dog
from it and override speak() to print "Woof!". Create objects and show how the constructor of the
base and derived class is called
*/

#include <iostream>
using namespace std;
class Animal
{
    public:
    Animal()
    {
        cout<<"Default constructor called"<<endl;
    }
    void speak()
    {
        cout<<"Animal noice"<<endl;
    }
};
class Dog : public Animal
{
    public:
    Dog()
    {
        cout<<"Dog default countructor called"<<endl;
    }
    void speak()
    {
        cout<<"WOOF!"<<endl;
    }
};
int main() 
{
    Dog D;
    D.speak();
    return 0;
}