/*
Que 6. Implement a program for multiple inheritance. Create two base classes: Father (with a
constructor and method property()) and Mother (with a constructor and method talent()). Derive a
class Child that inherits from both and demonstrates constructor calling.
*/

#include <iostream>
using namespace std;
class Father
{
    public:
        Father()
        {
            cout<<"Father constructor called"<<endl;
        }
        void property()
        {
            cout<<"Propery of Father is acessed by child"<<endl;
        }
};
class Mother
{
    public:
        Mother()
        {
            cout<<"Mother constructior called"<<endl;
        }
        void talent()
        {
            cout<<"Talent of mother is acessed by child"<<endl;
        }
};
class Child : public Father, public Mother
{
    public:
        Child() : Father(), Mother()
        {
            cout<<"Child constructor called"<<endl;
        }
        // void Combine()
        // {
        //     cout<<"Child Has acess of both property and talent"<<endl;
        // }

};

int main() 
{
    Child C;
    C.property();
    C.talent();
    // C.Combine();
    return 0;
}