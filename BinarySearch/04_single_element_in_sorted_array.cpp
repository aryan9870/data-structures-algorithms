#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector <int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};

    int start = 0;
    int end = nums.size()-1;

    // edge case
    if(nums.size() == 1) {
        cout << "Single element is: " << nums[0];
        return 0;
    }

    while (start <= end) {
        int mid = start + (end-start)/2;

        // edge case
        if(mid == 0 && nums[mid] != nums[mid+1]) {
            cout << "Single element is: " << nums[mid];
            break;
        }
        // edge case
        if(mid == nums.size()-1 && nums[mid] != nums[mid-1]) {
            cout << "Single element is: " << nums[mid];
            break;
        }
        
        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) {
            cout << "Single element is: " << nums[mid];
            break;
        }
        
        if(mid % 2 == 0) { // evan elements both side
            if(nums[mid] == nums[mid-1]) {
                end = mid-1;
            } else {
                start = mid+1;
            }
        } else {  // odd elements both side
            if(nums[mid] == nums[mid-1]) {
                start = mid+1;
            } else {
                end = mid-1;
            }
        }
    }
}