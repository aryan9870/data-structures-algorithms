#include <iostream>
#include <climits>
using namespace std;

int main() {

    int nums[] = {5, 15, 22, 1, 45, 14};
    int size = sizeof(nums) / sizeof(nums[0]);
    int smallest = INT_MAX;

    for (int i = 0; i < size; i++) {
        if(nums[i] < smallest) smallest = nums[i];
    }

    cout<<"Smallest number is: "<<smallest;
   

}