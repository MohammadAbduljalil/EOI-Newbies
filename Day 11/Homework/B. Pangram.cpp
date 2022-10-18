#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    char ch[n];
    int sum = 0;
    int current = 97;
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
        if (ch[i] <= 90)
        {
            ch[i] += 32;
        }
    }
    sort(ch, ch + n);
    for (int i = 0; i < n; i++)
    {
        if (ch[i] == current && i != 0)
        {
            ch[i] = 0;
        }
        sum += ch[i];
        if (ch[i] != 0)
        {
            current = ch[i];
        }
    }
    if (sum == 2847)
    {
        cout << "YES";
    } else
    {
        cout << "NO";
    }
    return 0;
}

