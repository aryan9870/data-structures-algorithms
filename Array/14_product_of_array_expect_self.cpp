#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();

    // ans[i] me initially left product store karenge
    vector<int> ans(n, 1);

    // Left products calculate karo
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int rightProduct = 1;

    // Right se traverse karke
    // right product ko current left product se multiply kar do
    for (int i = n - 2; i >= 0; i--) {

        // Current index ke right side ka product
        rightProduct *= nums[i + 1];

        // Final answer = left product × right product
        ans[i] *= rightProduct;
    }

    // Print answer
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}