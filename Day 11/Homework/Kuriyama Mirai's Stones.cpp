#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    double arr[n];
    double prefixSum1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            prefixSum1[0] = arr[0];
            continue;
        }
        prefixSum1[i] = prefixSum1[i-1] + arr[i];
    }
    sort(arr, arr + n);
    double prefixSum2[n];
    prefixSum2[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum2[i] = prefixSum2[i-1] + arr[i];
    }
    int m; cin >> m;
    while (m--)
    {
        int type, l, r; cin >> type >> l >> r;
        r--; l--;
        if (type == 1)
        {
            if (l == 0)
            {
                cout << (long long)(prefixSum1[r]) << "\n";
            } else
            {
                cout << (long long)(prefixSum1[r]) - (long long)(prefixSum1[l-1]) << "\n";
            }
        } else
        {
            if (l == 0)
            {
                cout << (long long)(prefixSum2[r]) << "\n";
            } else
            {
                cout << (long long)(prefixSum2[r]) - (long long)(prefixSum2[l-1]) << "\n";
            }
        }
    }
    return 0;
}



