#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = height.size();

    int maxWater = 0;

    // Two pointers: ek start se, ek end se
    for(int i = 0, j = n - 1; i < j; ) {

        // Container ki width
        int w = j - i;

        // Water hamesha choti wall tak hi bhar sakta hai
        int h = min(height[i], height[j]);

        // Current container me kitna water store hoga
        int curWater = w * h;

        // Maximum answer update karo
        maxWater = max(maxWater, curWater);

        // Choti wall ko move karo
        // Kyuki width to har case me kam hogi,
        // area badhane ka chance sirf height badhane se hai
        if(height[i] > height[j]) {
            j--;
        } else {
            i++;
        }
    }

    cout << maxWater;

    return 0;
}