#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int arr[n][2];
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        if (((arr[i][0] > arr[n/2][0]) && (arr[i][1] > arr[n/2][1])) || (arr[i][0] < arr[n/2][0]) && (arr[i][1] < arr[n/2][1]))
        {
            p1++;
        } else if (((arr[i][0] > arr[n/2][0]) && (arr[i][1] < arr[n/2][1])) || (arr[i][0] < arr[n/2][0]) && (arr[i][1] > arr[n/2][1]))
        {
            p2++;
        }
    }
    cout << p1 << ' ' << p2;
    return 0;
}
