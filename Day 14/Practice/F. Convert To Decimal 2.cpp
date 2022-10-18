#include <iostream>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--)
    {
        long long n, x; cin >> n; x = 0;
        int num = 0;
        while (n != 0)
        {
            if (n%2 == 1)
            {
                num++;
            }
            n /= 2;
        }
        for (int i = 0; i < num; i++)
        {
            x *= 2; x += 1;
        }
        cout << x << '\n';
    }
    return 0;
}
