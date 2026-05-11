#include <iostream>
using namespace std;
#include <string>
#include <algorithm>


class Solution {
public:

    string reverseWords(string s) {

        string temp = "";
        string result = "";   

        // Traverse from end
        for (int i = s.length() - 1; i >= 0; i--) {

            // If space found
            if (s[i] == ' ') {

                if (temp != "") {

                    // Reverse temp and add to result
                    for (int j = temp.length() - 1; j >= 0; j--) {
                        result += temp[j];
                    }

                    result += " ";
                    temp = "";
                }
            }
            else {
                temp += s[i];
            }
        }

        // Add last word
        for (int j = temp.length() - 1; j >= 0; j--) {
            result += temp[j];
        }

        // Remove extra ending space
        if (!result.empty() && result.back() == ' ') {
            result.pop_back();
        }

        return result;
    }
};