#include <iostream>
using namespace std;

int main () {

    int nums[] = {4, 2, 7, 8, 1, 2, 5};

    int size = sizeof(nums)/sizeof(nums[0]);

    for (int i = 0, j = size-1; i <= j; i++, j--) {
        int a = nums[i];
        int b = nums[j];

        nums[i] = b;
        nums[j] = a;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<nums[i]<<" ";
    }
    
    
}