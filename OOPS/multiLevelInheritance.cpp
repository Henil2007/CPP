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
    void show_vehicle()
    {
        cout<<"Car name : "<<name<<endl;
        // cout<<"Year of manufacture : "<<manufacture<<endl;
    }
};
class Fuel : public Vehicle
{
   private : 
        string fuel;
    public:

    Fuel(string n , int m , string f) : Vehicle(n , m)
    {
        fuel = f;
    }
    void show_fuel()
    {
        show_vehicle();
        cout<<"Year of manufacture : "<<manufacture<<endl;
        cout<<"Fuel type is : "<<fuel<<endl;
    }
};
class Brand : public Fuel
{
    public:
        string brand;
    
        Brand(string n , int m , string f , string b) : Fuel(n , m , f)
        {
            brand = b;
        }
    
        void diaplay()
        {
            show_fuel();        
            cout<<"Car brand : "<<brand<<endl; 
        }
};

int main() 
{
    Brand B("M4",2025,"Petrol","BMW");
    B.diaplay();
    
    return 0;
}