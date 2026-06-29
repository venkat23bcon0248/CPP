#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string s;

    cout << "Enter brackets: ";
    cin >> s;

    stack<char> st;

    bool valid = true;

    for (char ch : s)
    {
        // Opening brackets
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            if (st.empty())
            {
                valid = false;
                break;
            }

            char top = st.top();

            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '['))
            {
                st.pop();
            }
            else
            {
                valid = false;
                break;
            }
        }
    }

    if (!st.empty())
        valid = false;

    if (valid)
        cout << "Valid Parentheses";
    else
        cout << "Invalid Parentheses";

    return 0;
}