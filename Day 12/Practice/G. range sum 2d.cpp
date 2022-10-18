#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, q; cin >> n >> m >> q;
    long long arr;
    long long prefixSum[n][m];
    long long prefixSum2[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr;
            if (j == 0)
            {
                prefixSum[i][0] = arr;
                if (i == 0)
                {
                    prefixSum2[i][j] = arr;
                } else
                {
                    prefixSum2[i][0] = arr + prefixSum2[i - 1][j];
                }

            } else
            {
                prefixSum[i][j] = prefixSum[i][j-1] + arr;
                if (i == 0)
                {
                    prefixSum2[i][j] = prefixSum[i][j-1] + arr;
                } else
                {
                    prefixSum2[i][j] = arr + prefixSum2[i-1][j] + prefixSum[i][j-1];
                }

            }
        }
    }
    /*cout << "\n";
    cout << "\n";
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << prefixSum2[i][j] << "    ";
        }
        cout << "\n";
    }*/
    while (q--)
    {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        x1--; y1--; x2--; y2--;
        if (x1 == 0)
        {
            if (y1 == 0)
            {
                cout << prefixSum2[x2][y2] << "\n";
            } else
            {
                cout << prefixSum2[x2][y2] - prefixSum2[x2][y1 - 1] << "\n";
            }
        } else if (y1 == 0)
        {
            cout << prefixSum2[x2][y2] - prefixSum2[x1 - 1][y2] << "\n";
        } else
        {
            cout << prefixSum2[x2][y2] - (prefixSum2[x2][y1 - 1] + (prefixSum2[x1 - 1][y2] - prefixSum2[x1 - 1][y1 - 1])) << "\n";
        }

    }
    return 0;
}


/*
        1  |  2  |  3  |  4  |  5
        5  |  3  |  2  |  2  |  9
        2  |  4  |  8  |  5  |  11
        10 |  12 |  4  |  9  |  4
        1  |  1  |  1  |  1  |  1
        --------------------------
        1  |  3  |  6  |  10 |  15
        6  |  11 |  16 |  22 |  36
        8  |  17 |  30 |  41 |  66
        18 |  39 |  56 |  76 |  105
        19 |  41 |  59 |  80 |  110
*/
