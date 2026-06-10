#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {4, 5, 6, 0, 1, 2, 3};
    int target = 4;

    int left = 0;
    int right = arr.size() - 1;

    while(left <= right) {
        int mid = left + (right-left)/2;

        if(target == arr[mid]) {
            cout << "Target found at idx: " << mid;
            break;
        }

        if(arr[left] < arr[mid]) {
            if(target >= arr[left] && target < arr[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else {
            if(target <= arr[right] && target > arr[mid]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
}