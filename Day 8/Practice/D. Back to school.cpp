#include <iostream>
#include <algorithm>

using namespace std;

bool binarySearch(long long arr[], int N, long long X)
{
    int l = 0; int r = N -1; int mid;
    while (l <= r)
    {
        mid = (l+r)/2;
        if (arr[mid] == X)
        {
            return true;
        } else if (X > arr[mid])
        {
            l = mid + 1;
        } else if (X < arr[mid])
        {
            r = mid - 1;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T; cin >> T;
    for (int Q = 0; Q < T; Q++)
    {
        int N; cin >> N; // 3
        long long X; cin >> X;
        long long a[N];
        bool good = false;
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        sort(a,a+N);
        for (int i = 0; i < N; i++)
        {
            long long rest = X - a[i];
            if (rest == a[i])
            {
                long long last = a[i]; // 2
                if (i+1 < N)
                {
                    a[i] = a[i+1]; // 5
                } else
                {
                    a[i] = a[i-1];
                }
                if (binarySearch(a, N, rest))
                {
                    good = true;
                    break;
                }
                a[i] = last;
            } else if (binarySearch(a, N, rest))
            {
                good = true;
                break;
            }
        }
        if (good)
        {
            cout << "YES" << "\n";
        } else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
