// A string is palindrome if it remains same after reversing.
#include <iostream>
#include <string>
using namespace std;
int main() {

    string s;
    cout << "Enter a string: ";
    cin >> s;

    int i = 0;
    int j = s.length() - 1;
  

    while(i < j && !isalnum(s[i]) && !isalnum(s[j])) {

        if(tolower(s[i]) != tolower(s[j])) {
            cout << "Not a Palindrome";
            return 0;
        }
        i++;
        j--;
    }

    cout << "Palindrome";

    return 0;
}

