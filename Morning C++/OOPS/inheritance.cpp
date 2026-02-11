#include <iostream>
using namespace std;
class Mammal
{
    public:
        Mammal()
        {
            cout<<endl<<"This is default counst. of mammel base 1 class";
        }
        void displayMammel()
        {
            cout<<endl<<"I am the mammel class";
        }
};
class Carnivore
{
    public:
        Carnivore()
        {
            cout<<endl<<"This is the default counst. of the Carnivore base 2 class";
        }
        void displayCarnivore()
        {
            cout<<endl<<"I am carnivore animal who does not depend on plants";
        }
};
class Cheetah
{
    public:
        cheetah()
        {
            cout<<endl<<"This is default const. of class cheetah ";
        }
        void displayCheetah()
        {
            cout<<endl<<"i am Mammal who is carnivore and faster land animal";
        }
};
int main() 
{
    Cheetah c;
    c.displayMammel();
    c.displayCheetah();
    c.displayCarnivore();
    return 0;
}