#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector <int> nums = {4, 1, 5, 2, 3};

    for(int i = 1; i < nums.size(); i++) {
        int cur = nums[i];
        int prev = i-1;

        while(nums[prev] > cur && prev >= 0) {
            nums[prev+1] = nums[prev];
            prev--;
        }

        nums[prev+1] = cur;
    }
        


    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}