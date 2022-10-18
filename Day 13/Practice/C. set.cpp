#include <iostream>
#include <set>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> s;
    int q; cin >> q;
    while (q--)
    {
        string x; long long y; cin >> x >> y;
        if (x == "lower_bound")
        {
            auto i = s.lower_bound(y);
            if (i != s.end())
            {
                cout << *i << '\n';
            } else
            {
                cout << -1 << '\n';
            }
        } else if (x == "upper_bound")
        {
            auto i = s.upper_bound(y);
            if (i != s.end())
            {
                cout << *i << '\n';
            } else
            {
                cout << -1 << '\n';
            }
        } else if (x == "find")
        {
            auto i = s.find(y);
            if (i != s.end())
            {
                cout << "found\n";
            } else
            {
                cout << "not found\n";
            }
        } else
        {
            s.insert(y);
        }
    }
    return 0;
}
