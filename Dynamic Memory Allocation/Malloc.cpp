#include <iostream>
#include<stdlib.h>
using namespace std;
int main() 
{
    int n,i;
    int *arr;

    cout<<"Enter size of array : ";
    cin>>n;

    arr = (int*) malloc(sizeof(int)*n);

    if(arr == NULL)
    {
        cout<<"memory not allocated...";
        return 0;
    }
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}