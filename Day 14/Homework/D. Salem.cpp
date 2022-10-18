#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long hamming(long long x, long long y)
{
    long long res = 0;
    vector<long long> a;
    while (x > 0)
    {
        a.push_back(x%2);
        x /= 2;
    }
    vector<long long> b;
    while (y > 0)
    {
        b.push_back(y%2);
        y /= 2;
    }
    if (a.size() > b.size())
    {
        long long diff = a.size() - b.size();
        for (long long i = 0; i < diff; i++)
        {
            b.push_back(0);
        }
    } else if (a.size() < b.size())
    {
        long long diff = b.size() - a.size();
        for (long long i = 0; i < diff; i++)
        {
            a.push_back(0);
        }
    }
    for (long long i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            res++;
        }
    }
    return res;
}

int main()
{
    long long t; cin >> t;
    while (t--)
    {
        long long n; cin >> n;
        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long ans = 0;
        for (long long i = 0; i < n; i++)
        {
            for (long long j = i; j < n; j++)
            {
                if (hamming(arr[i], arr[j]) > ans)
                    ans = hamming(arr[i], arr[j]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
