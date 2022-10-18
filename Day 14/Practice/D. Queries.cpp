#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

long long lowerBound(int arr[], int n, long long wanted)
{
    int l = 0; int r = n - 1; int mid; int res = -1;
    while (l <= r)
    {
        mid = (l+r)/2;
        if (arr[mid] < wanted)
        {
            l = mid + 1;
        } else
        {
            res = arr[mid];
            r = mid - 1;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q; cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    while (q--)
    {
        int x; double y; cin >> x >> y;
        long long wanted = ceil(y/x);
        cout << lowerBound(arr, n, wanted) << '\n';
    }
    return 0;
}
