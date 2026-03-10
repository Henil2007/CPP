#include <iostream>
using namespace std;
class Vehicle
{
    public:
        string name;
        int manufacture;
    Vehicle(string n , int m)
    {
        name = n;
        manufacture = m;
    }
};
class Fuel
{
    private : 
        string fuel;
    public:
    Fuel(string f)
    {
        fuel = f;
    }
    void show()
    {
        cout<<"Fuel type is : "<<fuel<<endl;
    }
};
class Brand : public Vehicle , public Fuel
{
    public:
        string brand;
    Brand(string name , int manufacture , string fuel , string b) : Vehicle(name, manufacture), Fuel(fuel)
    {
        brand = b;
    }
    void info()
    {
        cout<<"Car name : "<<name<<endl;
        cout<<"Manufacture year : "<<manufacture<<endl;
        Fuel :: show();
        cout<<"Car brand : "<<brand<<endl;
    }
};

int main() 
{
    Brand B("M5",2025,"Petrol","BMW");
    B.info();
    
    return 0;
}