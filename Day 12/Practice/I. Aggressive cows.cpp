#include <iostream>
#include <algorithm>

using namespace std;

long long lowerBound (long long arr[], int n, long long x)
{
    int l = 0; int r = n - 1; int mid; long long res = -1;
    while (l <= r)
    {
        mid = (l+r)/2;
        if (arr[mid] >= x)
        {
            res = mid;
            r = mid - 1;
        } else
        {
            l = mid + 1;
        }
    }
    return res;
}

long long binarySearch (long long arr[], int n, int c)
{
    long long l = 0; long long r = 1e18; long long mid, res;
    while (l <= r)
    {
        mid = (l+r)/2;
        /*Number of cows that can fit in the array by distance x can be identified through :
          1. Finding the first number that is greater than or equal to arr[0] + x
          2. Finding the next number that will be greater than or equal to previous + x
          3. Counting the number of elements found
        */
        long long num = 1; long long index = 0;
        while (index <= n - 1)
        {
            index = lowerBound(arr, n, arr[index] + mid);
            if (index == -1)
                break;
            num++;
        }
        if (/*Number of cows that can fit in distance x*/ num >= c)
        {
            res = mid;
            l = mid + 1;
        } else
        {
            r = mid - 1;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c; cin >> n >> c;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout << binarySearch (arr, n, c);
    return 0;
}
