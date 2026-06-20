#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector <int> nums = {4, 1, 5, 2, 3};


    for(int i = 0; i < nums.size(); i++) {
        int smallest = nums[i];
        int smallestIdx = i;
        for(int j = i+1; j < nums.size(); j++) {
            if(nums[j] < smallest){
                smallest = nums[j];
                smallestIdx = j;
            }
        }

        swap(nums[i], nums[smallestIdx]);
    }


    for(int i = 0; i < nums.size(); i++) {
        cout<<nums[i]<<" ";
    }


}