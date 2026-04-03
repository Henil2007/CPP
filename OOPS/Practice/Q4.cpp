/*
Que 4. What will be the output of the following code? Explain why. Also modify the program so that
class A and class B both have constructors that print messages when objects are created. #include
using namespace std; class A { public: void show() { cout << "A::show()" << endl; } }; class B : public
A { public: void show() { cout << "B::show()" << endl; } }; int main() { B obj; obj.show(); obj.A::show();
}
*/

#include<iostream>
using namespace std; 
class A 
{ public: 
    A()
    {
        cout<<"Class A constructor"<<endl;
    }
    void show() 
    { 
        cout << "A::show()" << endl; 
    } 
}; 
class B : public A 
{ 
    public: 
    B()
    {
        cout<<"Class B constructor called"<<endl;
    }
    void show() 
    { 
        cout << "B::show()" << endl; 
    } 
}; 
int main() 
{ 
    B obj; 
    obj.show(); 
    obj.A::show();
}