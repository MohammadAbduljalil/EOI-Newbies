#include <iostream>
#include <map>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, long long> mp;
    int n, q; cin >> n >> q;
    while (n--)
    {
        string x; long long y; cin >> x >> y;
        mp[x] = y;
    }
    while (q--)
    {
        int z; string x;
        cin >> z >> x;
        if (z == 1)
        {
            int y; cin >> y;
            mp[x] += y;
        } else
        {
            cout << mp[x] << '\n';
        }
    }
    return 0;
}
