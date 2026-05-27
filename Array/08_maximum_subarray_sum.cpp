#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main () {

    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};

    int maxSum = INT_MIN;
    int curSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        curSum = curSum + arr[i];

        maxSum = max(maxSum, curSum);
        
        if(curSum < 0) curSum = 0;
    }

    cout<<maxSum;
    

}