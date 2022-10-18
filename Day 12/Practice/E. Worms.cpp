#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int prefixSum[n]; prefixSum[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i-1] + a[i];
    }
    int m; cin >> m;
    while (m--)
    {
        int q; cin >> q;
        cout << (lower_bound(prefixSum, prefixSum + n, q)-prefixSum)+1 << endl;
    }
    return 0;
}
