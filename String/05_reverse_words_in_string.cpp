#include <iostream>
#include <algorithm>
using namespace std;

int main () {

    string str = "the sky is blue";

    reverse(str.begin(), str.end());

    string ans = "";
    for(int i = 0; i < str.length(); i++) {
        string word = "";
        while(i < str.length() && str[i] != ' ') {
            word += str[i];
            i++;
        }
        reverse(word.begin(), word.end());
        ans += " " + word;
    }

    cout << ans.substr(1) << endl;

}