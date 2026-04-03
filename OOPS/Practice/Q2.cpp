/*
Que 2. Create a base class Shape with data members length and breadth initialized using a
constructor. Derive a class Rectangle that calculates and displays the area. Write a complete
program demonstrating constructor usage
*/

#include <iostream>
using namespace std;
class Shape
{
    public:
    int length,breabth;
    Shape(int l,int b)
    {
        length = l;
        breabth = b;
    }
};

class Rectange : public Shape
{
    public:
    Rectange(int l , int b) : Shape(l, b)
    {
        length = l;
        breabth = b;
    }
    void area()
    {
        int area = length * breabth;
        cout<<"Area = "<<area<<endl;
    }
};

int main() 
{
    Rectange r(10,20);
    r.area();
    return 0;
}