#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<int> nums = {1, 2, 2, 1, 1};

    int candidate = nums[0];
    int count = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++;
        } else {
            count--;
        }
    }

    cout << candidate;
}