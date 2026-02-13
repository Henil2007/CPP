#include <iostream>
using namespace std;
class item
{
    int number;
    float cost;

public:
    void getdata(int a, int b);
    void putdata();
    // {
    //     cout<<"Number : "<<number<<endl;
    //     cout<<"Cost : "<<cost<<endl;
    // }
};
void item ::getdata(int a, int b)
{
    number = a;
    cost = b;
}
void item ::putdata()
{
    cout << "Number : " << number << endl;
    cout << "Cost : " << cost << endl;
}
int main()
{
    item x;
    cout << "object x " << endl;

    x.getdata(200, 20.32);
    x.putdata();

    item y;
    cout << "Object y" << endl;

    y.getdata(500, 15.26);
    y.putdata();
    return 0;
}