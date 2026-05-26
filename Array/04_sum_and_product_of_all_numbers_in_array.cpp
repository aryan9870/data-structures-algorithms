#include <iostream>
using namespace std;

int main() {

    int nums[] = {2, 6, 1, 5, 3};
    int size = sizeof(nums)/sizeof(nums[0]);

    int sum = 0;
    int product = 1;

    for(int i = 0; i < size; i++) {
        sum += nums[i];
        product *= nums[i];
    }

    cout<<"Sum: "<<sum<<endl;
    cout<<"Product: "<<product<<endl;

}