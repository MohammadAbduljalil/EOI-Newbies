#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    long long a[n][m];
    long long b[n][m];
    bool canConvert = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> b[i][j];
            if (!((a[i][j] == (-1 * b[i][j])) || (a[i][j]%b[i][j] == 0)))
            {
                canConvert = false;
            }
        }
    }
    if (canConvert)
    {
        cout << "YES";
    } else
    {
        cout << "NO";
    }
    return 0;
}
