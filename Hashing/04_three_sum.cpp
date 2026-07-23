#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    for (int i = 0; i < nums.size(); i++)
    {

        unordered_set<int> st;

        for (int j = i + 1; j < nums.size(); j++)
        {

            int toFind = -nums[i] - nums[j];

            if (st.find(toFind) != st.end())
            {

                cout << nums[i] << " "
                     << nums[j] << " "
                     << toFind << endl;
            }

            st.insert(nums[j]);
        }
    }
}
