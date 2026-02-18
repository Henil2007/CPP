#include <iostream>
using namespace std;
int main() 
{
    int a,b,max;
    int *p,*q;

    cout<<endl<<"Enter number a : ";
    cin>>a;
    cout<<endl<<"Enter number b : ";
    cin>>b;

    p = &a;
    q = &b;

    if(*p > *q)
    {
        cout<<endl<<"Max is : "<<*p;
    }
    else
    {
        cout<<endl<<"Max is : "<<*q;
    }
    return 0;
}