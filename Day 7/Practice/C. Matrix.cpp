#include <iostream>
using namespace std;
int main()
{
    int x; cin >> x;
    int a[x][x];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> a[i][j];
        }
    }
    int mainDiagounalSum = 0;
    int secondaryDiagounalSum = 0;
    for (int i = 0; i < x; i++)
    {
        mainDiagounalSum += a[i][i];
    }
    for (int i = 0; i < x; i++)
    {
        secondaryDiagounalSum += a[i][x-1-i];
    }
    int difference = mainDiagounalSum - secondaryDiagounalSum;
    if (difference < 0)
    {
        difference *= -1;
    }
    cout << difference;
    return 0;
}
