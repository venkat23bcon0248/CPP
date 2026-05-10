#include <iostream>
using namespace std;

int main() {

    string s;
    cin >> s;

    int i = 0;
    int j = s.length() - 1;
    char temp;

    while(i < j) {

        temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }

    cout << "Reversed String: " << s;

    return 0;
}