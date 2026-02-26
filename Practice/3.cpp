/*
Que :3 

Write C++ program to implement the calculator for the date of Easter.
The following algorithm computes the date for Easter Sunday for any year between 1900 to 2099.
Ask the user to enter a year. Compute the following:
 1.a = year % 19
 2.b = year % 4
 3.c = year % 7
 4.d = (19 * a + 24) % 30
 5.e = (2 * b + 4 * c + 6 * d + 5) % 7
 6.dateofeaster = 22 + d + e
Special note: The algorithm can give a date in April. You will know that the date is in April if the calculation gives you an 
answer greater than 31. (You’ll need to adjust) Also, if the year is one of four special years (1954, 1981, 2049, or 2076) 
then subtract 7 from the date.
Eg:
Input: Year : 2022
Expected Outcome: 2022-04-17 (i.e. 17th April 2022)
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter Year (1900-2099): ";
    cin >> year;

    int a = year % 19;
    int b = year % 4;
    int c = year % 7;
    int d = (19 * a + 24) % 30;
    int e = (2 * b + 4 * c + 6 * d + 5) % 7;

    int date = 22 + d + e;

    if (year == 1954 || year == 1981 || year == 2049 || year == 2076)
        date -= 7;

    if (date > 31)
        cout << year << "-04-" << date - 31;
    else
        cout << year << "-03-" << date;

    return 0;
}