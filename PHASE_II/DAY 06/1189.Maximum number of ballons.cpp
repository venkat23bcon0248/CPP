#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int maxNumberOfBalloons(string text) {

    unordered_map<char, int> freq;

    for (char c : text) {
        freq[c]++;
    }

    int ans = min({
        freq['b'],
        freq['a'],
        freq['l'] / 2,
        freq['o'] / 2,
        freq['n']
    });

    return ans;
}

int main() {

    string text;

    cout << "Enter the string: ";
    cin >> text;

    cout << "Maximum Balloons = " << maxNumberOfBalloons(text);

    return 0;
}