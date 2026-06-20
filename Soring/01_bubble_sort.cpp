#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector <int> nums = {4, 1, 5, 2, 3};
    
    for(int i = 1; i < nums.size(); i++) {
        bool swapped = false;
        for(int j = 0; j < nums.size()-i; j++) {

            if(nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }

    for(int i = 0; i < nums.size(); i++) {
        cout<<nums[i]<<" ";
    }

}
