#include <iostream>
using namespace std;
int main() 
{
    int a[5];
    int *p;
    int i;
    p = a;
    for(i=0;i<5;i++)
    {
        cin>>*(p+i);
    }
    for(i=0;i<5;i++)
    {
        cout<<endl<<*(p+i);
    }

    return 0;
}