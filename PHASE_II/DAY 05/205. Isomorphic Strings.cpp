#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    bool isIsomorphic = true;

    unordered_map<char, char> charMap;
    
    unordered_map<char, char> reverseMap;
    


    if(s.length() != t.length()) {

        isIsomorphic = false;
    }


    for(int i = 0; i < s.length() && isIsomorphic; i++) {

        char c1 = s[i];
        char c2 = t[i];


    

        if(charMap.find(c1) != charMap.end()) {

            if(charMap[c1] != c2) {

                isIsomorphic = false;
            }
        }

        else {

            charMap[c1] = c2;
        }


        

        if(reverseMap.find(c2) != reverseMap.end()) {

            if(reverseMap[c2] != c1) {

                isIsomorphic = false;
            }
        }

        else {

            reverseMap[c2] = c1;
        }
    }


    if(isIsomorphic) {

        cout << "The strings are isomorphic." << endl;
    }

    else {

        cout << "The strings are not isomorphic." << endl;
    }

    return 0;
}