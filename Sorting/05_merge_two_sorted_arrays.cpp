#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 5, 6, 8};

    vector<int> merged(nums1.size() + nums2.size());

    int i = 0, j = 0, k = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] < nums2[j])
        {
            merged[k] = nums1[i];
            i++;
        }
        else
        {
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }

    while (i < nums1.size())
    {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    while (j < nums2.size())
    {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    for (int i = 0; i < merged.size(); i++)
    {
        cout << merged[i] << " ";
    }
}