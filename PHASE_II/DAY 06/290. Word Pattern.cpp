#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    string pattern, s;
    cin >> pattern;
    cin.ignore();
    getline(cin, s);

    vector<string> words;
    string word = "";
    for (char c : s)
    {
        if (c == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else
        {
            word += c;
        }
    }
    words.push_back(word);

    if (pattern.length() != words.size())
    {
        cout << "false" << endl;
        return 0;
    }

    unordered_map<char, string> mp1;
    unordered_map<string, char> mp2;

    for (int i = 0; i < pattern.length(); i++)
    {
        char c = pattern[i];
        string w = words[i];

        if (mp1.find(c) == mp1.end() && mp2.find(w) == mp2.end())
        {
            mp1[c] = w;
            mp2[w] = c;
        }
        else if (mp1.find(c) != mp1.end() && mp2.find(w) != mp2.end())
        {
            if (mp1[c] != w || mp2[w] != c)
            {
                cout << "false" << endl;
                return 0;
            }
        }
        else
        {
            cout << "false" << endl;
            return 0;
        }
    }

    cout << "true" << endl;

    return 0;
}