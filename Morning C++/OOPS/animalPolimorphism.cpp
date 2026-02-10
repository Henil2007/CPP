#include <iostream>
using namespace std;
class Animal
{
    int legs;
    string sound;

    public:
        void getDetails();
        void displayDetails();
        Animal()
        {
            cout<<endl<<"THis is the default constructor of the super class Animal";
        }
};
void Animal::getDetails()
{
    cout<<endl<<"Enter the number of legs the animal posses : ";
    cin>>legs;
    cout<<endl<<"Enter the general scound : ";
}
int main() 
{
    return 0;
}