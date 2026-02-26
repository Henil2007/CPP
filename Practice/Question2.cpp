/*
Que :2 

Write a C++  code to Compute the product and sum  of the odd digits in a given number, 0 if there are not any odd digits in a given number. 
Example: 
(1) Input: 123456789 
    Output 1: 945  output 2 : 25
(2) Input: 2468 
    Output: 0 
(3) Input: 123547 
    Output: 105   output 2 :16 
*/

#include <iostream>
using namespace std;

int main() 
{
    long long num;
    cout << "Enter Number: ";
    cin >> num;

    int digit;
    long product = 1;
    int sum = 0;
    bool hasOdd = false;

    while (num > 0) 
    {
        digit = num % 10;

        if (digit % 2 != 0) 
        {   
            product *= digit;
            sum += digit;
            hasOdd = true;
        }

        num /= 10;
    }

    if (hasOdd) 
    {
        cout << "Product of odd digits: " << product << endl;
        cout << "Sum of odd digits: " << sum << endl;
    } else 
    {
        cout << "0" << endl;
    }

    return 0;
}