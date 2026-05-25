#include <iostream>
using namespace std;

int fibonacci(int n) {

    if(n == 1)
        return 0;

    if(n == 2)
        return 1;

    int a = 0;
    int b = 1;
    int c = 0;

    for (int i = 3; i <= n; i++)
    {
        c = a + b;

        a = b;
        b = c;
    }
    
    return c;

}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int result = fibonacci(n);

    cout<<"Ans = "<<result;
}