/*
Que 5. Write a C++ program to demonstrate multilevel inheritance. Create three classes: Vehicle
(base), Car (derived from Vehicle), and ElectricCar (derived from Car). Each class should have a
constructor that prints a message and a method that displays its type.
*/

#include <iostream>
using namespace std;
class Vehicle
{
    public:
        string type;
        Vehicle(string t)
        {
            cout<<"Vehile constructor called"<<endl;
            type = t;
        }
        void display()
        {
            cout<<"Vehicle type is : "<<type<<endl;
        }
};
class Car : public Vehicle
{
    public:
        int model;
        string name;
        Car(string t, int m, string n) : Vehicle(t)
        {
            model = m;
            name = n;
            cout<<"Car constructor called"<<endl;
        }
        void displayModel()
        {
            cout<<"Car name is : "<<name<<endl;
            cout<<"Car model is : "<<model<<endl;
        }
};
class ElectricCar : public Car
{
    public:
        string fuel;
        ElectricCar(string t, int m, string n, string f) : Car(t, m, n)
        {
            fuel = f;
            cout<<"Electric Car constructor called"<<endl;
        }
        void displayFuel()
        {
            cout<<"Fuel type is : "<<fuel<<endl;
        }
};
int main() 
{
    ElectricCar E("Car",2023,"punch","Electric");
    
    E.display();
    E.displayModel();
    E.displayFuel();
    return 0;
}