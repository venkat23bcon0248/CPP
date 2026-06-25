#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<char, int> mp;

    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    string s;
    cin >> s;

    int ans = 0;
    int prev = 0;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        int cur = mp[s[i]];

        if (cur < prev)
        {
            ans = ans - cur;
        }
        else
        {
            ans = ans + cur;
            prev = cur;
        }
    }

    cout << ans << endl;

    return 0;
}