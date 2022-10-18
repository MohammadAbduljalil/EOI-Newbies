#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n];
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > maximum)
            maximum = a[i];
    }
    bool x[maximum + 1] = {};
    int y[n] = {};
    for(int i = n-1; i >= 0; i--)
    {
        if (!x[a[i]])
        {
            x[a[i]] = true;
            y[i]++;
        }
        if (i != n-1)
        {
            y[i] += y[i+1];
        }
    }
    while(m--)
    {
        int q; cin >> q; q--;
        cout << y[q] << "\n";
    }
    return 0;
}
