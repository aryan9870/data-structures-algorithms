#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {2, 7, 11, 15};

    int target;
    cin >> target;

    int i = 0;
    int j = nums.size() - 1;

    while (i < j)
    {
        int currSum = nums[i] + nums[j];

        if (currSum == target)
        {
            cout << nums[i] << ", " << nums[j];
            break;
        }
        else if (currSum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}