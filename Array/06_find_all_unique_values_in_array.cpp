#include <iostream>
using namespace std;

int main() {
    int nums[] = {2, 6, 1, 5, 3, 1, 6};
    int size = sizeof(nums)/sizeof(nums[0]);

    for(int i = 0; i < size; i++) {
        bool unique = true;
        for (int j = 0; j < size; j++) {
            if(nums[i] == nums[j] && i != j) unique = false;
        }

        if(unique)cout<<nums[i]<<" ";
        
    }
}