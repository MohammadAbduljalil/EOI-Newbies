#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long binarySearch(long long l, long long r, long long x)
{
    long long mid;
    long long noIterations = 1;
    while (l <= r)
    {
        mid = (l+r)/2;
        if (mid == x)
        {
            break;
        } else if (x > mid)
        {
            l = mid + 1;
        } else
        {
            r = mid - 1;
        }
        noIterations++;
    }
    return noIterations;
}
int main()
{
    long long a, b, x; cin >> a >> b >> x;
    cout << binarySearch(a,b,x);
    return 0;
}
