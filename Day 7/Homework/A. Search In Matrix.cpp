#include <iostream>
using namespace std;
int main()
{
    int N,M; cin >> N >> M;
    long long a[N][M];
    bool exist;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> a[i][j];
        }
    }
    int X; cin >> X;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (a[i][j] == X)
            {
                exist = true;
                break;
            }
            else
            {
                exist = false;
            }
        }
        if (exist)
            break;
    }
    if (exist)
    {
        cout << "will not take number";
    } else
    {
        cout << "will take number";
    }
    return 0;
}
