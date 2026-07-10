#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) {
            int rem = a % b;
            a = b;
            b = rem;
        } else {
            int rem = b % a;
            b = a;
            a = rem;
        }
    }
    
    return (a == 0) ? b : a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a = 18, b = 48;
    
    int hcf_result = gcd(a, b);
    cout << "The highest common factor is: " << hcf_result << endl;
    
    int lcm_result = lcm(a, b);
    cout << "The least common multiple is: " << lcm_result << endl;
}
    
    
