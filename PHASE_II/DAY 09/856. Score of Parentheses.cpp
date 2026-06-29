#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string s;

    cout << "Enter parentheses: ";
    cin >> s;

    stack<int> st;

    int score = 0;

    for (char ch : s)
    {
        if (ch == '(')
        {
            // Save current score
            st.push(score);

            // Start a new score
            score = 0;
        }
        else
        {
            // Previous score before this '('
            int previous = st.top();
            st.pop();

            // If score == 0, it was "()"
            // Otherwise, it was "(A)"
            score = previous + max(2 * score, 1);
        }
    }

    cout << "Score = " << score << endl;

    return 0;
}