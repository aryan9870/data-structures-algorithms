#include <iostream>
using namespace std;



int main() {

    int num;

    // taking input
    cout<<"Enter the number: ";
    cin>>num;

    // 0 and 1 are not prime
    if(num <= 1) {
        cout << "Number is Non-prime";
        return 0;
    }

    // assume number is prime
    bool prime = true;

    // checking divisibility from 2 to num-1
    for (int i = 2; i < num; i++)
    {
        // if perfectly divisible
        if(num % i == 0) {

            // number is not prime
            prime = false;

            // no need to check further
            break;
        }
    }

    // final result
    if(prime == true) {
        cout<<"Number is Prime";
    } else {
        cout<<"Number is Non-prime";
    }
    
    return 0;
}