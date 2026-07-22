#include <iostream>
#include <vector>
using namespace std;

int main () {


    vector <int> v = {3,1,3,4,2};


    int slow = v[0];
    int fast = v[0];

    do{
        slow = v[slow];
        fast = v[v[fast]];
    } while (slow != fast);

    slow = v[0];

    while (slow != fast) {
        slow = v[slow];
        fast = v[fast];
    }

    cout << slow;
    
}