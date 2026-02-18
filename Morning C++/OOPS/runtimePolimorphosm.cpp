#include <iostream>
using namespace std;

class Parent
{
    int l,b,ans;

    public:
        Parent()
        {
            cout<<endl<<"This is default parent class const.";
            l=10;
            b=5;
            ans=0;
        }
    virtual void area()
    {
        cout<<endl<<"This is the area function of Parent class";
        ans=l*b;
        cout<<endl<<"The area is : "<<ans;
    }
};
class Derived:public Parent
{
    int l,ans;
    public:
        Derived()
        {
            l=2;
            cout<<endl<<"This is the derived class default const.";
        }
        void area()
        {
            cout<<endl<<"THis is the area of derived class";
            ans = l*l;
            cout<<endl<<"The area is : "<<ans;
        }
};
int main() 
{
    Parent *ptr;
    Parent obj1;
    Derived obj2;
    ptr = &obj1;
    ptr->area();
    ptr = &obj2;
    ptr->area();
    return 0;
}