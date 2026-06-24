# include <iostream>>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    bool isPalindrome = true;

    for(int i = 0; i < n / 2; i++) {
        if(s[i] != s[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}