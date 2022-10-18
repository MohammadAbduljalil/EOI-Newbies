#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

long long nearestSize(long long wanted, long long available[], int n)
{
    // 1 2 3 4 5 7 9 13
    long long a;
    int l = 0; int r = n-1; int mid;
    while (l <= r)
    {
        mid = (l+r)/2;
        if (available[mid] < wanted)
        {
            l = mid + 1;
        } else if (available[mid] > wanted)
        {
            r = mid - 1;
            a = mid;
        } else
        {
            return available[mid];
        }









            /*a = wanted - available[mid];
            if (r < l)
            {
                b = wanted - available[mid - 1];
            } else if (r > l)
            {
                b = wanted - available[mid + 1];
            } else
            {
                b = a;
            }
            a = abs(a);
            b = abs(b);
            if (a <= b)
            {
                return available[a];
            } else if (a > b)
            {
                return available[b];
            }*/
    }
    if (available[n-1] < wanted)
        return available[n-1];
    if (a != 0)
    {
        if (available[a] - wanted >= wanted - available[a-1])
        {
            return available[a-1];
        } else
        {
            return available[a];
        }
    } else
    {
        return available[0];
    }
}

int main()
{
    int n, q; cin >> n >> q;
    long long availableSize[n];
    for (int i = 0; i < n; i++)
    {
        cin >> availableSize[i];
    }
    sort(availableSize, availableSize + n);
    for (int i = 0; i < q; i++)
    {
        long long wantedSize; cin >> wantedSize;
        cout << nearestSize(wantedSize, availableSize, n) << endl;
    }
    return 0;
}

