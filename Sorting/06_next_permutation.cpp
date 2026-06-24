#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 6, 5, 4};

    // Find the pivot point
    int pivot = -1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1]) {
            pivot = i;
            break;
        }
    }
    cout << "Pivot: " << pivot << endl;

    // If pivot not found reverse the whole array
    if (pivot == -1) {
        reverse(nums.begin(), nums.end());
        return 0;
    }

    // Find the next greater element and swap it with the pivot
    for (int i = nums.size() - 1; i > pivot; i--) {
        if (nums[i] > nums[pivot]) {
            swap(nums[i], nums[pivot]);
            break;
        }
    }

    // Reverse the elements after the pivot
    reverse(nums.begin() + pivot + 1, nums.end());


    // print the next permutation
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}
