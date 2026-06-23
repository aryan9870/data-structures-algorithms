#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector <int> nums = {0, 1, 2, 0, 1, 2, 0, 1, 2};

    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if(nums[mid] == 1) {
            mid++;
        } else if(nums[mid] == 2) {
            swap(nums[mid], nums[high]);
            high--;
        }
    }

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    
}