#include <iostream>
using namespace std;

int main() {
    int x;
    int n;

    cout << "Enter the base: ";
    cin >> x;

    cout << "Enter the exponent: ";
    cin >> n;

    int ans = 1;

    while (n > 0) {
        if (n % 2 == 1)
            ans *= x;

        x *= x;
        n /= 2;
    }

    cout << "Answer = " << ans << endl;

    return 0;
}