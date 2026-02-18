#include <iostream>
using namespace std;
int main() 
{
    int a[10];
    int sum = 0,i;
    int *p;
    p = a;

    for(i=0;i<10;i++)
    {
        cout<<"Enter element : ";
        cin>>*(p+i);
    }
    for(i=0;i<10;i++)
    {
        sum += *(p+i);
    }

    cout<<endl<<"Sum is : "<<sum;
    return 0;
}