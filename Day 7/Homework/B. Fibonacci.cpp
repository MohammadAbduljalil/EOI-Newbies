#include <iostream>
using namespace std;
int main()
{
    int x; cin >> x;
    long long a[--x];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= x; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    cout << a[x];
    return 0;
}
