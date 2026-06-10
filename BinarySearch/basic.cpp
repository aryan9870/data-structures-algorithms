#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;
    int left = 0;
    int right = arr.size() - 1;

    while(left <= right) {
        int mid = left + (right-left)/2;
        if(arr[mid] == target) {
            cout<<"Target found at idx: "<<mid;
            break;
        } else if(arr[mid] > target) {
            right = mid-1;
        } else {
            left = mid+1;
        }
    }
}