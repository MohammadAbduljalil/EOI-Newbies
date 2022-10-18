#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    long long a[n];
    long long x;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << i << endl;
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << -1;
    }
    return 0;
}
