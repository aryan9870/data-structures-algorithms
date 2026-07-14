#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[3][3] = {
        {7, 8, 1},
        {4, 5, 6},
        {9, 2, 3}
    };

    int maxColSum = INT_MIN;
    for(int i = 0; i < 3; i++) {
        int colSum = 0;
        for(int j = 0; j < 3; j++) {
            colSum += arr[j][i];
        }
        maxColSum = max(maxColSum, colSum);
    }
    cout << "Maximum column sum is: " << maxColSum << endl;
}