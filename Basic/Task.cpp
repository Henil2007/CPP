/*
Write a cpp program that prompts the user to enter numbers and stops only when the use enter “QUIT” . After this 
print sum  and average of the numbers, minimum and maximum number from given numbers entered by user.

For Example:  Input:  4,1,5,”QUIT”
Output:
Sum=10
Average=3.333
Minimum number=1
Maximum number=5
*/

#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int a[50];
    int sum = 0;
    int i = 0;
    int max ;
    int min ;
    string input;
    while (true)
    {
        cout<<"Enter number : ";
        cin>>input;

        if(input == "QUIT")
        {
            break;
        }
        
        a[i] = stod(input);
        if(i == 0)
        {
            min = max = a[i];
        }
        sum += a[i];
        if(a[i] >= max)
        {
            max = a[i];
        }
        else
        {
            if(a[i]<min)
            {
                min = a[i];
            }
        }
        i++;
        // cout<<a[i]<<" "<<endl;
    }
    cout<<"Sum="<<sum<<endl;
    cout<<"Average="<<(double)sum/i<<endl;
    cout<<"Max = "<<max<<endl;
    cout<<"Min = "<<min<<endl;
    
    return 0;
}