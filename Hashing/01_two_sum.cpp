#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {

    vector <int>arr = {2, 5, 7, 4, 9};
    int target = 14;

    unordered_map<int, int> map;

    for(int i = 0; i < arr.size(); i++) {
        int first = arr[i];
        int second = target - first;

        if(map.find(second) != map.end()) {
            cout << i << ", " << map[second] << endl; 
        }

        map[first] = i;

    }
}