#include <iostream>
#include <algorithm>

using namespace std;

string binarySearch (long long arr[], int n, long long x)
{
    int l = 0; int r = n - 1; int mid;
    while (l <= r)
    {
        mid = (l+r)/2;
        if (arr[mid] == x)
        {
            return "found\n";
        } else if (arr[mid] > x)
        {
            r = mid - 1;
        } else if (arr[mid] < x)
        {
            l = mid + 1;
        }
    }
    return "not found\n";
}

long long lowerBound (long long arr[], int n, long long x)
{
    int l = 0; int r = n - 1; int mid; long long res = -1;
    while (l <= r)
    {
        mid = (l+r)/2;
        if (arr[mid] >= x)
        {
            res = arr[mid];
            r = mid - 1;
        } else
        {
            l = mid + 1;
        }
    }
    return res;
}

long long upperBound (long long arr[], int n, long long x)
{
    int l = 0; int r = n - 1; int mid; long long res = -1;
    while (l <= r)
    {
        mid = (l+r)/2;
        if (arr[mid] > x)
        {
            res = arr[mid];
            r = mid - 1;
        } else
        {
            l = mid + 1;
        }
    }
    return res;
}

int main()
{
    int n, q; cin >> n >> q;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort (arr, arr + n);
    while (q--)
    {
        string query; long long x; cin >> query >> x;
        if (query == "binary_search")
        {
            cout << binarySearch(arr, n, x);
        } else if (query == "lower_bound")
        {
            cout << lowerBound(arr, n, x) << '\n';
        } else if (query == "upper_bound")
        {
            cout << upperBound(arr, n, x) << '\n';
        }
    }
    return 0;
}
