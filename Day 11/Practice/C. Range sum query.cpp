#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n, q; cin >> n >> q; // 6 3
    long long arr[n]; // 6 4 2 7 2 7
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    while (q--)
    {
        int l, r; cin >> l >> r;
        l--; r--;
        if (l == 0)
        {
            cout << prefixSum[r] << endl;
        } else
        {
            cout << prefixSum[r] - prefixSum[l-1] << endl;
        }

    }
    return 0;
}
