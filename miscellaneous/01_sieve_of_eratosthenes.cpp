#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 10;
    vector<bool> is_prime(n + 1, true);

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (is_prime[i]) {
            count++;
            for (int j = i*2; j < n; j+= i) {
                is_prime[j] = false;
            }
        }
            
    }

    // Print all prime numbers
    for (int i = 2; i < n; i++) {
        if (is_prime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Count of prime numbers: " << count << endl;
    return 0;
}