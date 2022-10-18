#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long binarySearch (int st, int in, int ex)
{
    int l = 0; int r = ex; int mid; int res = 0;
    while (l <= r)
    {
        mid = (l+r)/2;
        if ((mid + in) < ((ex - mid) + st))
        {
            res = mid + 1;
            l = mid + 1;
        } else
        {
            r = mid - 1;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--)
    {
        int st, in, ex; cin >> st >> in >> ex;
        cout << binarySearch(st, in, ex) << '\n';
    }
    return 0;
}
