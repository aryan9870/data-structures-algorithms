#include <iostream>
using namespace std;

// Program to find factorial of a number
int main()
{

    int num; // Variable to store user input

    // Taking input from user
    cout << "Enter the number: ";
    cin >> num;

    int fact = 1; // Factorial starts from 1

    // Loop from 1 to num
    for (int i = 1; i <= num; i++)
    {
        // Multiply current value of fact by i
        fact = fact * i;
    }

    // Print factorial
    cout << "Factorial = " << fact;

    return 0;
}