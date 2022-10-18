#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n, q; cin >> n >> q;
    int i = 0;
    int freqArr[n+1] = {};
    while (q != 0)
    {
        int z, x; cin >> z >> x;
        if (z == 1)
        {
            freqArr[x]++;
            i++;
        } else
        {
            cout << freqArr[x] << endl;
        }
        q--;
    }
    return 0;
}
