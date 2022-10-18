#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long n; cin >> n;
        if (n%2 == 0)
        {
            cout << "SAFE." << '\n';
        } else
        {
            cout << "RUN!" << '\n';
        }
    }
    return 0;
}
