#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int arr[n]; int freqArr[(2 * m) + 1] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freqArr[arr[i] + m]++;
    }
    for (int i = -1 * m; i <= m; i++)
    {
        if (freqArr[i + m] == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}

