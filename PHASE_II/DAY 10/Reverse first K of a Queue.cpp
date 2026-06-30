#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    queue<int> q;
    stack<int> st;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    int k = 3;



    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }



    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }



    int remaining = q.size() - k;

    for (int i = 0; i < remaining; i++)
    {
        q.push(q.front());
        q.pop();
    }



    cout << "Queue after reversing first " << k << " elements:\n";

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}