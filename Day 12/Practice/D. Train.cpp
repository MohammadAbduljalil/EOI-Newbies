#include <iostream>
using namespace std;

long long binary(long long n, long long a, long long b, long long c)
{
    long long l = 1; long long r = 1e18; long long mid; long long result;
    while (l <= r)
    {
        mid = (l+r)/2;
        long long maximum = (mid/a)+(mid/b)+(mid/c);
        if (maximum < n)
        {
            l = mid + 1;
        } else if (maximum >= n)
        {
            r = mid - 1;
            result = mid;
        }
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--)
    {
        long long n; cin >> n;
        long long a, b, c; cin >> a >> b >> c;
        cout << binary(n, a, b, c) << "\n";
    }
    return 0;
}
