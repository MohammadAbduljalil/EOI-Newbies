#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int n; cin >> n;
    if (n <= 0)
    {
        cout << "NO";
        return 0;
    }
    double x = log2(n);
    if (x == (int)(x))
    {
        cout << "YES";
    } else
    {
        cout << "NO";
    }
    return 0;
}
