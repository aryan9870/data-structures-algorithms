#include <iostream>
using namespace std;

int main() {

    int num = 2362;
    int originalNum = num;

    int reverseNum = 0;
    while(num > 0) {
        int lastDigit = num % 10;
        reverseNum = (reverseNum * 10) + lastDigit;
        num /= 10;
    }

    if(originalNum == reverseNum) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }

}