#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector <int> positions, int cow, int mid) {
    
    // sort the positions of the stalls
    sort(positions.begin(), positions.end());

    int count = 1;
    int lastStallPos = positions[0];

    for(int i = 0; i < positions.size(); i++) {
        if(positions[i] - lastStallPos >= mid) {
            count++;
            lastStallPos = positions[i];
        }
    }

    if(count >= cow) return true;
    else return false;

}


int main () {

    vector <int> positions = {1, 2, 8, 4, 9};
    int cow = 3;

    int st = 0;
    int end = 0;
    for(int i = 0; i < positions.size(); i++) {
        if(end < positions[i]) end = positions[i];
    }

    int ans = 0;
    while (st <= end) {
        int mid = st + (end-st)/2;

        if(isValid(positions, cow, mid)) {
            ans = mid;
            st = mid+1;
        } else {
            end = mid-1;
        }
    }

    cout << ans;

}