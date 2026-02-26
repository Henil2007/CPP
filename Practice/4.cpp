/*
Que :4 
Write a python program that prompts the user to enter numbers and stops only when the use enter “QUIT” . After this 
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

int main() {
    string input;
    double number;

    double sum = 0;
    double min, max;
    int count = 0;

    while (true) {
        cout << "Enter number (or QUIT to stop): ";
        cin >> input;

        if (input == "QUIT")
            break;

        number = stod(input);  // convert string to double

        if (count == 0) {
            min = max = number;
        } else {
            if (number < min)
                min = number;
            if (number > max)
                max = number;
        }

        sum += number;
        count++;
    }

    if (count == 0) {
        cout << "No numbers entered." << endl;
    } else {
        cout << "\nSum = " << sum << endl;
        cout << "Average = " << sum / count << endl;
        cout << "Minimum number = " << min << endl;
        cout << "Maximum number = " << max << endl;
    }

    return 0;
}