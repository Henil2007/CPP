#include <iostream>
using namespace std;
int main() 
{
    int a,b,temp;
    int *p;
    cout<<endl<<"Enter number a : ";
    cin>>a;
    cout<<endl<<"Enter number b : ";
    cin>>b;

    p = &a;
    temp = *p;
    a = b;
    b = temp;

    cout<<endl<<"Value of a : "<<a;
    cout<<endl<<"Value of b : "<<b;
    return 0;
}