#include <iostream>
using namespace std;

// Program to find sum of numbers from 1 to n
int main() {

    // variable to store user input
    int n;

    // asking user for input
    cout<<"Enter the number: ";

    // taking input from user
    cin>>n;

    // variable to store final sum
    int sum = 0;

    // loop runs from 1 to n
    for (int i = 1; i <= n; i++)
    {
        // adding current value of i into sum
        sum = sum+i;
    }

    // printing final answer
    cout<<sum;
    
}