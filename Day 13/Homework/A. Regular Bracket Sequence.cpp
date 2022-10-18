#include <iostream>
#include <stack>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x; cin >> x;
    stack<char> st;
    int n = x.size();
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == '(')
        {
            st.push('(');
        } else
        {
            if (!st.empty())
            {
                st.pop();
                num += 2;
            }
        }
    }
    cout << num;
    return 0;
}
