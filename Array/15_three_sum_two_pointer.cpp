#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> nums = {-4, -1, -1, 0, 1, 2};

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++) {

        // Skip duplicate first elements
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int j = i + 1;
        int k = nums.size() - 1;

        while (j < k) {

            int sum = nums[i] + nums[j] + nums[k];

            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {

                cout << nums[i] << " "
                     << nums[j] << " "
                     << nums[k] << endl;

                j++;
                k--;

                // Skip duplicate second elements
                while (j < k && nums[j] == nums[j - 1])
                    j++;

                // Skip duplicate third elements
                while (j < k && nums[k] == nums[k + 1])
                    k--;
            }
        }
    }

}