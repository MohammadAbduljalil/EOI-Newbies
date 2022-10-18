#include <iostream>
#include <algorithm>

using namespace std;

long long num(int prices[], long long coins, int n)
{
    int l = 0; int r = n-1; int mid; int result = 0;
    while (l <= r)
    {
        mid = (l + r)/2;
        if (prices[mid] <= coins)
        {
            result = mid + 1;
            l = mid + 1;
        } else if (prices[mid] > coins)
        {
            r = mid - 1;
        }
    }
    return result;
}

int main()
{

    int n; cin >> n;
    int prices[n];
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    sort(prices, prices + n);
    int q; cin >> q;
    for (int i = 0; i < q; i++)
    {
        long long coins; cin >> coins;
        cout <<  num(prices, coins, n) << endl;
    }
    return 0;
}
