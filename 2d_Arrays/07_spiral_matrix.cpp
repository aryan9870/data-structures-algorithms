#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    int top = 0, bottom = matrix.size() - 1, left = 0, right = matrix[0].size() - 1;
    while(top <= bottom && left <= right) {

        // top
        for(int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        
        // right
        for(int i = top+1; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }

        // bottom
        for(int i = right-1; i >= left; i--) {
            if(top == bottom) break;
            cout << matrix[bottom][i] << " ";
        }

        // left
        for(int i = bottom-1; i > top; i--) {
            if(right == left) break;
            cout << matrix[i][left] << " ";
        }

        top++;
        right--;
        bottom--;
        left++;
    }

}