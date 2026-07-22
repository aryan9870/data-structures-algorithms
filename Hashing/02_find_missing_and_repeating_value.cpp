#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {9, 1, 7, 8, 9, 2, 3, 4, 6};
    int n = arr.size();

    unordered_set<int> st;

    int repeatingNum, missingNum;

    int expSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++)
    {
        actualSum = actualSum + arr[i];
        if (st.find(arr[i]) != st.end())
        {
            repeatingNum = arr[i];
        }
        st.insert(arr[i]);
    }

    missingNum = expSum+repeatingNum-actualSum;

    cout << "Repeating Number: " << repeatingNum << endl;
    cout << "Missing Number: " << missingNum << endl;
}