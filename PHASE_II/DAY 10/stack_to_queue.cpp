#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    cout << "Queue Elements: ";

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}