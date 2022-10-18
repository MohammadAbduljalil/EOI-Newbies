#include <iostream>
using namespace std;
int main()
{
    int x; cin >> x;
    long long a[x];
    bool Lucky;
    int y = 0;
    long long b[x];
    int z = 0;
    for (int i = 0; i < x; i++)
    {
        b[i] = 0;
    }
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < x; i++)
    {
        Lucky = false;
        long long l = a[i];
        while (a[i] != 0)
        {
            if ((a[i]%10 == 4) || (a[i]%10 == 7))
            {
                Lucky = true;
            } else
            {
                Lucky = false;
                break;
            }
            a[i] /= 10;
        }
        if (Lucky)
        {
            y++;
            b[z] = l;
            z++;
        }
    }
    cout << y << endl;
    for (int i = 0; i < z; i++)
    {
        cout << b[i] << ' ';
    }
    return 0;
}
