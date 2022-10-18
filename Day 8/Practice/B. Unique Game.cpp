#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long max = a[0];
    long long min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
        if (a[i] <= min)
        {
            min = a[i];
        }
    }
    cout << max << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            a[i] = min - 1;
        }
    }
    max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    cout << max;
    return 0;
}
