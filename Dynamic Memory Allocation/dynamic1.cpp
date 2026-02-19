#include <iostream>
using namespace std;
int main() 
{
    int *p;
    p = new int;

    cout<<"Enter the value : ";
    cin>>*p;

    cout<<"Value is : "<<*p;

    delete p;
    return 0;
}