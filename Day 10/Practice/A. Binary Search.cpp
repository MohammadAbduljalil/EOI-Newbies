#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string binarySearch(long long arr[], int length, long long x)
{
    int l, r, mid;
    l = 0; r = length - 1;
    while (l <= r)
    {
        mid = (l+r)/2;
        if (arr[mid] == x)
        {
            return "found";
        } else if (x > arr[mid])
        {
            l = mid + 1;
        } else
        {
            r = mid - 1;
        }
    }
    return "not found";
}
int main()
{
    int n, q, x; cin >> n >> q;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        cout << binarySearch(arr, n, x) << endl;
    }
    return 0;
}
