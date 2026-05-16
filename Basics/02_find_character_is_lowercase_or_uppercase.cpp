#include <iostream>
using namespace std;

// Find whether character is uppercase or lowercase
int main()
{
    // variable to store character input
    char ch;

    // asking user for input
    cout << "Enter the character from a to b" << endl;

    // taking character input
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') // checking uppercase letters (A-Z)
    {
        cout << "UPPERCASE";
    }
    else if (ch >= 'a' && ch <= 'z') // checking lowercase letters (a-z)
    {
        cout << "lowercase";
    }
    else // if input is not an alphabet
    {
        cout << "Enter a valid character";
    }

    return 0;
}