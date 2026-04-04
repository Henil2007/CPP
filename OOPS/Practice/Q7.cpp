/*
Que 7. Explain and demonstrate the Diamond Problem in C++ using classes A, B, C, and D (where
D inherits from B and C, both inherit from A). Use constructors in each class and show how virtual
inheritance resolves the ambiguity.
*/

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor of A\n";
    }
    void show()
    {
        cout << "Class A function\n";
    }
};

class B : virtual public A
{
public:
    B()
    {
        cout << "Constructor of B\n";
    }
};

class C : virtual public A
{
public:
    C()
    {
        cout << "Constructor of C\n";
    }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "Constructor of D\n";
    }
};

int main()
{
    D obj;
    return 0;
}