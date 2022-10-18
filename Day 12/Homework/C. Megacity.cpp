#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int n, s; cin >> n >> s;
    map<double, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x, y, k; cin >> x >> y >> k;
        double distance = pow(x, 2) + pow(y, 2);
        distance = sqrt(distance);
        mp[distance] += k;
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        if ((s + (*i).second) >= 1000000)
        {
            cout << fixed << setprecision(7) << (*i).first << '\n'; break;
        } else
        {
            s += (*i).second;
        }
        auto itr = mp.end(); itr--;
        if (i == itr)
        {
            cout << -1 << '\n';
        }
    }
    return 0;
}

