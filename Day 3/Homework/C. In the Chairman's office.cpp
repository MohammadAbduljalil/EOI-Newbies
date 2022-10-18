#include <iostream>

using namespace std;

int main()
{
    int n; int m;
    cin >> n >> m;
    if ((m%n) == 0)
    {
        cout << "YES";
    } else
    {
        cout << "NO";
    }
    return 0;
}
