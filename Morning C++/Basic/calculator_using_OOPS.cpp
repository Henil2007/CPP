#include <iostream>
#include <stdlib.h>
using namespace std;

class A
{
private:
    int a, b, c;

public:
    void add();
    void sub();
    void mul();
    void div();
};

void A::add()
{
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;
    c = a + b;
    cout << "Sum is : " << c;
}
void A::sub()
{
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;
    c = a - b;
    cout << "Substraction is : " << c;
}
void A::mul()
{
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;
    c = a * b;
    cout << "Multiplication is : " << c;
}
void A::div()
{
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;
    c = a + b;
    cout << "Division is : " << c;
}

int main()
{
    int choice;
    A obj;
    while (true)
    {
        cout << endl
             << "1. For addition";
        cout << endl
             << "2. For Substraction";
        cout << endl
             << "3. For Multiplication";
        cout << endl
             << "4. For Division";
        cout << endl
             << "5. Exit";
        cout << endl
             << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.add();
            break;
        case 2:
            obj.sub();
            break;
        case 3:
            obj.mul();
        case 4:
            obj.div();
            break;
        case 5:
            exit(0);
        default:
            cout << endl
                 << "Enter a valid choice...";
        }
    }

    return 0;
}