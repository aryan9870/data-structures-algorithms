#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[3][3] = {
        {1, 7, 3},
        {4, 7, 5},
        {3, 1, 9}
    };

    int maxRowSum = INT_MIN;
    for(int i = 0; i < 3; i++) {
        int rowSum = 0;
        for(int j = 0; j < 3; j++) {
            rowSum += arr[i][j];
        }
        maxRowSum = max(maxRowSum, rowSum);
    }

    cout << "Maximum row sum is: " << maxRowSum << endl;

}