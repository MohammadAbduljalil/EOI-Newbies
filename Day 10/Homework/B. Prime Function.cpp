#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int T; cin >> T;
    while (T != 0)
    {
        long long n; cin >> n;
        if (n < 2)
        {
            cout << "NO" << endl;
            T--;
            continue;
        } else if (n == 2)
        {
            cout << "YES" << endl;
            T--;
            continue;
        }

        bool prime = true;
        for (long long i = 2; i < sqrt(n) + 1; i++)
        {
            if (n%i == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            cout << "YES" << endl;
        } else
        {
            cout << "NO" << endl;
        }
        T--;
    }
    return 0;
}
