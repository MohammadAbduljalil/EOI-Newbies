#include <iostream>
using namespace std;
int main()
{
    int x; cin >> x;
    int a[x];
    int min = a[0];
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < x; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    for (int i = 0; i < x; i++)
    {
        if (a[i] == min)
        {
            cout << a[i] << ' ' << i + 1;
            break;
        }
    }
    return 0;
}
