#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k; cin >> n >> k;
    pair<int, int> arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr, arr+n, greater<>());
    vector<int> v;
    long long sum = 0;
    for (int i = 0; i < k; i++) {
        v.push_back(arr[i].second);
        sum += arr[i].first;
    }
    cout << sum << '\n';
    sort(v.begin(), v.end());
    v[k-1] = n - v[k-2] - 1;
    if (k == 1) { cout << n; return 0; }
    for(int i = 0; i < k; i++) {
        cout << (i == k-1 ? v[i]:(v[i] - (i == 0 ? 0:v[i-1]+1) + 1)) << ' ';
    }
    return 0;
}
