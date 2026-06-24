#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;

    cout << "Enter a sentence: ";
    getline(cin, s);

    if(s[0] >= 'a' && s[0] <= 'z') {
        s[0] = s[0] - 32;
    }

    for(int i = 1; i < s.length(); i++) {

        if(s[i - 1] == ' ' && s[i] >= 'a' && s[i] <= 'z') {

            s[i] = s[i] - 32;
        }
    }

    cout << "Title Case: " << s;

    return 0;
}