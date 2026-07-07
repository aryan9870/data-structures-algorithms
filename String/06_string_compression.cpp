#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> chars = {'a','a','b','b','c', 'c', 'c', 'c'};
    int idx = 0;

    for(int i = 0; i < chars.size(); i++) {
        char ch = chars[i];
        int count = 0;
        while (chars[i] == ch && i < chars.size()) {
           count++;
           i++;
        }

        if(count == 1) {
            chars[idx] = ch;
            idx++;
        } else {
            chars[idx] = ch;
            idx++;
            string str = to_string(count);
            for(int i = 0; i < str.size(); i++) {
                chars[idx] = str[i];
                idx++;
            }
        }
        i--;
    }

    chars.resize(idx);
    for(int i = 0; i < chars.size(); i++) {
        cout << chars[i] << " ";
    }
}