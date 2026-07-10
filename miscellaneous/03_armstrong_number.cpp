#include <iostream>
using namespace std;

int main() {
    int n = 371; 
    int originalNumber = n;

    int armstrongSum = 0;
    while(n > 0) {
        int lastDigit = n % 10;
        int cube = lastDigit * lastDigit * lastDigit;
        armstrongSum += cube;
        n /= 10;
    }
    
    if(armstrongSum == originalNumber) {
        cout << "The number is an Armstrong number." << endl;
    } else {
        cout << "The number is not an Armstrong number." << endl;
    }
}