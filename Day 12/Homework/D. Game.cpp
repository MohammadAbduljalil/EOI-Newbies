#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, q; cin >> n >> q; long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    while (q--)
    {
        long long k; cin >> k;
        int l = 0; int r = n-1; int mid; int res = -1;
        while (l <= r)
        {
            mid = (l+r)/2;
            if (arr[mid] <= k)
            {
                l = mid + 1;
            } else
            {
                r = mid - 1;
                res = arr[mid];
            }
        }
        cout << res << "\n";
    }
    return 0;
}

