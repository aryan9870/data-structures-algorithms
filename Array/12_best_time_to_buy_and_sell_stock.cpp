#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector <int> nums = {7, 1, 5, 3, 6, 4};

    int maxProfit = 0;
    int minPrice = nums[0];
    for (int i = 0; i < nums.size(); i++) {

        int currProfit = nums[i] - minPrice;
        maxProfit = max(maxProfit,currProfit);
        minPrice = min(minPrice, nums[i]);

    }

    cout<<maxProfit;
    
}