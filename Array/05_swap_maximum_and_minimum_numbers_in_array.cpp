#include <iostream>
using namespace std;

int main() {
    int nums[] = {2, 6, 1, 5, 3};
    int size = sizeof(nums)/sizeof(nums[0]);

    int max = nums[0];
    int maxIdx = 0;
    int min = nums[0];
    int minIdx = 0;
    for (int i = 0; i < size; i++) {
        if(nums[i] < min) {
            min = nums[i];
            minIdx = i;
        };

        if(nums[i] > max) { 
            max = nums[i];
            maxIdx = i;
        }
    }

    nums[minIdx] = max;
    nums[maxIdx] = min;

    for (int i = 0; i < size; i++)
    {
        cout<<nums[i]<<" ";
    }
    
    
}