#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Function to print frequency of each character
void printfrequency(string str) {

    // Map to store character and its frequency
    unordered_map<char, int> M;

    // Traverse the string
    for(int i = 0; i < str.length(); i++) {

        // Check if character is not present in map
        if(M.find(str[i]) == M.end()) {

            // Insert character with frequency 1
            M[str[i]] = 1;
        }
        else {

            // Character already exists, increase frequency
            M[str[i]]++;
        }
    }

    // Print all characters and their frequencies
    for(auto x : M) {

        // x.first = character
        // x.second = frequency
        cout << x.first << " : " << x.second << endl;
    }
}

int main() {

    string str;

    // Take input string from user
    cout << "Enter string: ";
    cin >> str;

    // Call function to print frequencies
    printfrequency(str);

    return 0;
}