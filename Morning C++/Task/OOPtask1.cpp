/*
Create a program using Object-Oriented Programming concepts with the following requirements:

Create a class named Shape.

The class should have the following private data members:

length (integer)

breadth (integer)

Create a public member function named area() that calculates and returns the area of a rectangle using:

area =length×breadth

Create another public member function named area1() to calculate the area of a square.

In the main function:

Create an object of the Shape class.

Assign values to the data members.

Call both area() and area1() functions and display the results.

Note:

Use proper access specifiers.

Follow good coding style and indentation.

Take input from the user for dimensions.


Last Part Of Question

mysteryArea()
--> This method should modify length and breadth using the rules below and finally return the area.

Rules (follow in order):

1] If length is even → divide it by 2
Otherwise → add 3 to it

2] If breadth is odd → multiply it by 2
Otherwise → subtract 2 from it

3] If after step 1 & 2 any value becomes negative → make it positive.

4] Now compare both values:

    If length > breadth → subtract breadth from length

   If breadth > length → subtract length from breadth

   If equal → add 1 to both

5] Repeat step 4 one more time.

6] Return the final area using:

area = length × breadth
*/

#include <iostream>
using namespace std;

class shape
{
private:
    int length;
    int breath;

public:
    void area();
    void area1();
    void swapValues();
    int checkZero();
};

void shape::area()
{
    int area;

    cout<<"Enter length of rectangle : ";
    cin>>length;
    cout<<"Enter breath of rectangle : ";
    cin>>breath;

    area = length * breath;

    cout<<"area of rectangle is : "<<area<<endl;
}

void shape::area1()
{
    int area;

    // cout<<"Enter sizes of square : ";
    // cin>>length;
    // cout<<"Enter breath of square : ";
    // cin>>breath;

    area = length * length;

    cout<<"area of square is : "<<area<<endl;
}
void shape::swapValues()
{
    length = length + breath;
    breath = length - breath;
    length = length - breath;

    cout<<"Length after swap is : "<<length<<endl;
    cout<<"Breath after swap is : "<<breath<<endl;
}

int shape::checkZero()
{
    if (length == 0 || breath == 0)
    {
        return 0;
    }
    
}

int main()
{
    shape obj;
    obj.area();
    obj.checkZero();
    obj.area1();
    obj.swapValues();
    return 0;
}