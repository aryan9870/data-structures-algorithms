#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the number: ";

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
           cout<<" ";
           
        }

        cout<<"*"<<" ";

        for (int j = 0; j < i*2-1; j++)
        {
            cout<<" ";
        }
        
        if(i != 0) {
            cout<<"*";
        }
        

        cout<<endl;
        
    }
    
    
}