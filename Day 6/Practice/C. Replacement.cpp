#include <iostream>

using namespace std;

int main()
{
    int x; cin >> x;
    int a[x];
    for (int i = 0; i < x; i++)
    {
        int y; cin >> y;
        if (y > 0)
        {
            a[i] = 1;
        } else if (y < 0)
        {
            a[i] = 2;
        } else
        {
            a[i] = 0;
        }
    }
    for (int i = 0; i < x; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}
