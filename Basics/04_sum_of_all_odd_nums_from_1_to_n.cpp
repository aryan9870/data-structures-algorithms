#include <iostream>
using namespace std;

// Program to find sum of odd numbers from 1 to n
int main()
{
    // variable for user input
    int num;

    // asking user for number
    cout << "Enter the number: ";

    // taking input
    cin >> num;

    // variable to store total sum
    int sum = 0;

    // loop from 1 to num
    for (int i = 1; i <= num; i++)
    {
        // checking if number is odd
        if (i % 2 != 0)

            // adding odd number into sum
            sum = sum + i;
    }

    // printing final sum
    cout << sum;
}