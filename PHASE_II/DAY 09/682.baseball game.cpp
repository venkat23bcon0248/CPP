#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of operations: ";
    cin >> n;

    vector<string> operations(n);

    cout << "Enter the operations:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> operations[i];
    }

    stack<int> st;

    for (string op : operations)
    {
        if (op == "C")
        {
            st.pop();
        }
        else if (op == "D")
        {
            st.push(2 * st.top());
        }
        else if (op == "+")
        {
            int first = st.top();
            st.pop();

            int second = st.top();

            st.push(first);               // Restore
            st.push(first + second);      // Push sum
        }
        else
        {
            st.push(stoi(op));            // Convert string to integer
        }
    }

    int sum = 0;

    cout << "\nFinal Stack (Top to Bottom): ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        sum += st.top();
        st.pop();
    }

    cout << "\nFinal Score = " << sum << endl;

    return 0;
}