#include <iostream>
#include <stack>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    stack<long long> st;
    while (t--)
    {
        string query; cin >> query;
        if (query == "push")
        {
            long long x; cin >> x;
            st.push(x);
        } else if (query == "pop")
        {
            st.pop();
        } else
        {
            cout << st.top() << "\n";
        }
    }
    return 0;
}
