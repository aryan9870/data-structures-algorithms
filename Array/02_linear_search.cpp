#include <iostream>
using namespace std;

int main() {

    int nums[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(nums)/sizeof(nums[0]);

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    bool found = false;

    for (int i = 0; i < size; i++) {
        if(nums[i] == n) {
            cout<<"Number is at index "<<i;
            found = true;
            break;
        }
    }

    if(found == false) {
        cout<<"Number you entered is not present in the array";
    }
    
}