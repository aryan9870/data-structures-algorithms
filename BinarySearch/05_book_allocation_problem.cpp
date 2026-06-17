#include <iostream>
#include <vector>
using namespace std;


bool isValid(vector<int> books, int students, int mid) {

    if(students > books.size()) return false;

    int st = 1;
    int pages = 0;

    for(int i = 0; i < books.size(); i++) {
        if(books[i] > mid) return false;

        if(pages+books[i] <= mid) {
            pages += books[i];
        } else {
            st++;
            pages = books[i];
        }
    }

    if(st <= students) {
        return true;
    } else {
        return false;
    }

}


int main () {

    vector<int> books = {15, 17, 20};

    int students = 2;

    int st = 0;

    int end = 0;
    for(int i = 0; i < books.size(); i++) {
        end += books[i];
    }

    int ans = 0;
    while(st <= end) {
        int mid = st + (end-st)/2;

        if(isValid(books, students, mid)) {
             ans = mid;
             end = mid - 1;
        } else {
             st = mid + 1;
        }
    }

    cout << ans;

}