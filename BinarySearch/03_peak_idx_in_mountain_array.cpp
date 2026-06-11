#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {0, 2, 5, 8, 10, 7, 4, 1};

    int start = 1;             // Peak first index par nahi hoga
    int end = nums.size() - 2; // Peak last index par nahi hoga

    while (start <= end) {

        int mid = start + (end - start) / 2;

        // Peak found
        if (nums[mid] > nums[mid - 1] &&
            nums[mid] > nums[mid + 1])
        {

            cout << "Peak element found at index: " << mid << endl;
            break;
        }

        // Increasing slope -> go right
        else if (nums[mid] > nums[mid - 1])
        {
            start = mid + 1;
        }

        // Decreasing slope -> go left
        else
        {
            end = mid - 1;
        }
    }
}