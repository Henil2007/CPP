#include <iostream>
using namespace std;
int main() 
{
    int a[10],i;
    int *p;
    int even=0,odd=0;
    p = a;

    for(i=0;i<10;i++)
    {
        cout<<"Enter element : ";
        cin>>*(p+i);
    }

    for(i=0;i<10;i++)
    {
        if (*(p+i) % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<endl<<"No. of even terms : "<<even;
    cout<<endl<<"No. of odd terms : "<<odd;
    return 0;
}