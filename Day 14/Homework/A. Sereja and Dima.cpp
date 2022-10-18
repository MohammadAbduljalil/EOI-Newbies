#include <iostream>

using namespace std;


int main()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long a, b; a = 0; b = 0;
    int l, r; l = 0; r = 0;
    for (int i = 0 ; i < n ; i++)
    {
        long long value;
        if (arr[l] > arr[n - 1 - r])
        {
            value = arr[l]; l++;
        } else
        {
            value = arr[n-1-r]; r++;
        }
        if (i%2 == 0)
        {
            a += value;
        } else
        {
            b += value;
        }
    }
    cout << a << ' ' << b;
    return 0;
}
