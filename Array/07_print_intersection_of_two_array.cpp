#include <iostream>
using namespace std;

int main() {

    int nums1[] = {2, 5, 7};
    int nums2[] = {1, 5, 7, 9};

    int size1 = sizeof(nums1)/sizeof(nums1[0]);
    int size2 = sizeof(nums2)/sizeof(nums2[0]);

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if(nums1[i] == nums2[j]) cout<<nums1[i]<<" ";
        }
    }
    
}