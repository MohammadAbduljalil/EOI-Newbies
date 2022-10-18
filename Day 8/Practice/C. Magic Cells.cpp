#include <iostream>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n][m];
    long long d = 0;
    int min = n + m - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if ((a[i][j] == 1) && ((i + j) < min))
            {
                min = i + j;
            }
        }
    }
    cout << min;
    return 0;
}
