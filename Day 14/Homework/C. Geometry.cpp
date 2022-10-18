#include <iostream>

using namespace std;

int main()
{
    long long t; cin >> t;
    while (t--)
    {
        long long a, b; cin >> a >> b;
        if (a == b)
        {
            cout << "Square\n";
        } else
        {
            cout << "Rectangle\n";
        }
    }
    return 0;
}
