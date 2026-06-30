#include <iostream>
using namespace std;

int isAlphaNumric(char ch) {

    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
        return true;
    }

    return false;
}


int main () {
    
    string name;

    cout << "Enter your name: ";
    cin >> name;

    int palindrome = true;

    int i = 0; 
    int j = name.length()-1;
    while(i <= j) {
        if(!isAlphaNumric(name[i])) {
            i++;
            continue;
        }

        if(!isAlphaNumric(name[j])) {
            j--;
            continue;
        }

        if(tolower(name[i]) != tolower(name[j])){
            palindrome = false;
            break;
        }


        i++;
        j--;

    }

    if(palindrome) {
        cout << "Palindrome";
    } else {
        cout << "Not a Palindrome";
    }

}