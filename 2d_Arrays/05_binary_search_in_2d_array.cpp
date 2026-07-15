#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target = 5;

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row-1;

    while (start <= end) {
        int midRow = start + (end - start) / 2;
        if(target >= matrix[midRow][0] && target <= matrix[midRow][col-1]){
            int left = 0;
            int right = col-1;
            while (left <= right) {
                int midCol = left + (right - left) / 2;
                if (matrix[midRow][midCol] == target) {
                    cout << "Target " << target << " found at position (" << midRow << ", " << midCol << ")" << endl;
                    break;
                } else if (matrix[midRow][midCol] < target) {
                    left = midCol + 1;
                } else {
                    right = midCol - 1;
                }
            }
            break;
        } else if (target < matrix[midRow][0]) {
            end = midRow - 1;
        } else {
            start = midRow + 1;
        }
    }
}
    