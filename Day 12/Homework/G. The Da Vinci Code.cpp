#include <bits/stdc++.h>
using namespace std;
long long bs(long long prfx[], int n, int mid)
{
    long long mx = (-1*LLONG_MAX)+1;
    for (int i = 0; i <= (n-mid); i++)
    {
        long long cur = prfx[i+mid-1] - (i == 0 ? 0:prfx[i-1]);
        mx = max(mx, cur);
    }
    return mx;
}
int main()
{
    long long n; long long x; cin >> n >> x;
    long long arr[n];
    long long prfx[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i) prfx[i] = prfx[i-1] + arr[i];
        else prfx[i] = arr[i];
    }
    int l = 1; int r = n; int mid; int res = -1;
    while (l <= r)
    {
        mid = (l+r)/2;
        if (bs(prfx, n, mid) <= x)
        {
            res = mid;
            l = mid + 1;
        } else
        {
            r = mid - 1;
        }
    }
    cout << res;
    return 0;
}
// 0 1 2 3 4 5 6
