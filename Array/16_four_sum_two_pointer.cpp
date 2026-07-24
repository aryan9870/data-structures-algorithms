#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> nums = {-2, -1, -1, 1, 1, 2, 2};
    int target = 0;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {

        // Skip duplicate i
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j <= nums.size(); j++) {

            // Skip duplicate j
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int p = j + 1;
            int q = nums.size() - 1;

            while (p < q) {
                int sum = nums[i] + nums[j] + nums[p] + nums[q];

                if (sum < target) {
                    p++;
                } else if (sum > target) {
                    q--;
                } else {
                    cout << nums[i] << " "
                         << nums[j] << " "
                         << nums[p] << " "
                         << nums[q] << endl;

                    p++;
                    q--;

                    // Skip duplicate left
                    while (p < q &&
                           nums[p] == nums[p - 1])
                        p++;

                    // Skip duplicate right
                    while (p < q &&
                           nums[q] == nums[q + 1])
                        q--;
                }
            }
        }
    }
}