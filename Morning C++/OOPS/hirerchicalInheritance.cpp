#include <iostream>
using namespace std;
class Animal
{
    public:
        Animal()
        {
            cout<<endl<<"This is default of Animal";
        }
        void eat()
        {
            cout<<endl<<"All animal needs food to eat";
        }
};
class Dog : public Animal
{
    public:
        Dog()
        {
            cout<<endl<<"this is first derived class of animals";
        }
        void bark()
        {
            cout<<endl<<"the dog barks";
        }
};
class Cat : public Animal
{
    public:
        Cat()
        {
            cout<<endl<<"Default const. of cat";
        }
        void meow()
        {
            cout<<endl<<"Cat says meow";
        }
};
class Goat : public Animal
{
    public:
        Goat()
        {
            cout<<endl<<"Default const. of derived class Goat";
        }
        void bla()
        {
            cout<<endl<<"the goat says bla bla";
        }
};
int main() 
{
    Dog d;
    Cat c;
    Goat g;
    d.eat();
    d.bark();
    c.eat();
    c.meow();
    g.eat();
    g.bla();

    return 0;
}