#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    int q; cin >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        int x; int y; cin >> x >> y;
        int z = a[x-1];
        int l = a[y-1];
        a[x-1] = l;
        a[y-1] = z;
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
