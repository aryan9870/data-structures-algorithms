#include <iostream>
#include <vector>
using namespace std;

int main() {

    string s1 = "eidbaooo";
    string s2 = "abd";
    bool found = false;

    vector<int> freq(26, 0);
    for(int i = 0; i < s2.length(); i++) {
        freq[s2[i] - 'a']++;
    }

    for(int i = 0; i < s1.length(); i++){
        vector<int> windowFreq(26, 0);
        int j = i;
        while(j < s1.length() && j < i + s2.length()) {
            windowFreq[s1[j] - 'a']++;
            j++;
        }
        if(freq == windowFreq) {
            found = true;
            cout << "Found at index: " << i << endl;
        }
    }
    if(!found) {
        cout << "Not found" << endl;
    }

}