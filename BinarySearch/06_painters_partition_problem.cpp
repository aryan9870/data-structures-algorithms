#include <iostream>
#include <vector>
using namespace std;

bool allocateBoards(vector <int> boards, int painters, int mid) {
    int pt = 1;
    int time = 0;
    
    for (int i = 0; i < boards.size(); i++) {
        if(boards[i] > mid) return false;

        if(time+boards[i] <= mid) {
            time += boards[i];
        } else {
            pt++;
            time = boards[i];
        }
    }

    if(pt <= painters) {
        return true;
    } else {
        return false;
    }
    
}

int main() {
    vector<int> boards = {40, 30, 10, 20};
    int painters = 2;

    int st = 0;
    int end = 0;

    for(int i = 0; i < boards.size(); i++) {
        end += boards[i];
    }

    int ans = 0;
    while(st <= end) {
        int mid = st + (end-st)/2;

        if(allocateBoards(boards, painters, mid)) {
            ans = mid;
            end = mid-1;
        } else {
            st = mid+1;
        }
    }

    cout << ans;
    
}