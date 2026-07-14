#include <iostream>
using namespace std;

int main() {

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3;

    int primaryDiagonalSum = 0;
    for(int i = 0; i < n; i++) {
        primaryDiagonalSum += arr[i][i];
    }

    int secondaryDiagonalSum = 0;
    for(int i = 0; i < n; i++) {
        secondaryDiagonalSum += arr[i][n - 1 - i];
    }
    
    if(n % 2 == 1) {
        secondaryDiagonalSum -= arr[n / 2][n / 2];
    }

    cout << "Diagonal sum is: " << primaryDiagonalSum + secondaryDiagonalSum << endl;
}

