#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--)
    {
        int n, m, k; cin >> n >> m >> k;
        vector<int> vec;
        multiset<long long> st;
        for (int i = 0; i < n; i++)
        {
            if (st.size() == m)
            {
                vec.push_back(*(st.begin()));
                st.erase(st.begin());
            }
            long long x; cin >> x;
            st.insert(x);
        }
        while (!st.empty())
        {
            vec.push_back(*(st.begin()));
            st.erase(st.begin());
        }
        cout << vec[k-1] << '\n';
    }
    return 0;
}
