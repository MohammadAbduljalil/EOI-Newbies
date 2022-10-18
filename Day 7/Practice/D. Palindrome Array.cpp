#include <iostream>
using namespace std;
int main()
{
    int x; cin >> x;
    long long a[x];
    bool pal;
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < x/2; i++)
    {
        if (a[i] == a[x-1-i])
        {
            pal = true;
        } else
        {
            pal = false;
            break;
        }
    }
    if (pal)
    {
        cout << "YES";
    } else
    {
        cout << "NO";
    }
    return 0;
}
