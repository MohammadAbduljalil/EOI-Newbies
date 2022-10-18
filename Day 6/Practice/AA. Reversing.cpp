#include <iostream>

using namespace std;

int main()
{
    int x; cin >> x;
    long long a[x];
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for (int i = x; i > 0; i--)
    {
        cout << a[i-1] << ' ';
    }
    return 0;
}
