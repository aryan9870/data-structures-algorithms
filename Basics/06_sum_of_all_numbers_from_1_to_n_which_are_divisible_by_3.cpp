#include <iostream>
using namespace std;

// Program to find sum of all numbers
// from 1 to n which are divisible by 3
int main()
{
    int num; // Variable to store user input

    // Taking input from user
    cout << "Enter the number: ";
    cin >> num;

    int sum = 0; // Variable to store final sum

    // Loop from 1 to num
    for (int i = 1; i <= num; i++)
    {
        // Check if number is divisible by 3
        if (i % 3 == 0)
        {
            // Add number into sum
            sum = sum + i;
        }
    }

    // Print final answer
    cout << "Sum = " << sum;

    return 0;
}