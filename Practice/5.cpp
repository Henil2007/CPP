/*
Que :5 
Write c++ program that enters a single digit integer number and produces all possible 6-digit numbers for which the product 
of their digits is equal to the entered number.
Example: "number" → 2
 •111112 → 1 * 1 * 1 * 1 * 1 * 2 = 2
 •111121 → 1 * 1 * 1 * 1 * 2 * 1 = 2
 •111211 → 1 * 1 * 1 * 2 * 1 * 1 = 2
 •112111 → 1 * 1 * 2 * 1 * 1 * 1 = 2
 •121111 → 1 * 2 * 1 * 1 * 1 * 1 = 2
 •211111 → 2 * 1 * 1 * 1 * 1 * 1 = 2
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter single digit number: ";
    cin >> number;

    for (int i = 100000; i <= 999999; i++) {
        int temp = i;
        int product = 1;

        for (int j = 0; j < 6; j++) {
            product *= (temp % 10);
            temp /= 10;
        }

        if (product == number) {
            cout << i << endl;
        }
    }

    return 0;
}