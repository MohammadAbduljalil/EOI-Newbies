#include <iostream>
#include <cmath>
using namespace std;

long long root(double product, int n)
{
    long long l = 0; long long r = 1e18 - 1; long long mid, res;
    while (l <= r)
    {
        mid = (l+r)/2;
        if (n*log(mid) <= product)
        {
            l = mid + 1;
        } else
        {
            r = mid - 1;
            res = mid;
        }
    }
    return res;
}

int main()
{
    int n; cin >> n; double product = 0;
    for (int i = 0; i < n; i++)
    {
        long long x; cin >> x;
        product += log(x);
    }
    cout << root(product, n);
    return 0;
}

// We search for the upper bound of the nth root and print.
