#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {

        // Store all words from the sentence
        vector<string> words;

        string word;

        // Convert string into stringstream
        stringstream ss(s);

        // Extract each word one by one
        while (ss >> word) {
            words.push_back(word);
        }

        // Number of words must equal pattern length
        if (words.size() != pattern.length()) {
            return false;
        }

        // Character -> Word
        unordered_map<char, string> charToWord;

        // Word -> Character
        unordered_map<string, char> wordToChar;

        for (int i = 0; i < pattern.length(); i++) {

            char c = pattern[i];
            string w = words[i];

            // Character already mapped to another word
            if (charToWord.count(c) && charToWord[c] != w) {
                return false;
            }

            // Word already mapped to another character
            if (wordToChar.count(w) && wordToChar[w] != c) {
                return false;
            }

            // Create mapping
            charToWord[c] = w;
            wordToChar[w] = c;
        }

        return true;
    }
};