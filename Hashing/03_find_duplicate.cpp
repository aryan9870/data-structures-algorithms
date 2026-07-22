#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main () {


    vector <int> v = {1, 2, 3, 3, 4};

    unordered_set <int> st;

    for(int i = 0; i < v.size(); i++) {
        if(st.find(v[i]) != st.end()) {
            cout << v[i] << endl;
            break;
        }

        st.insert(v[i]);
    }

}