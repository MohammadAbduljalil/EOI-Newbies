#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s; cin >> s;
    int arr[123] = {};
    for (int i = 0; i < s.length(); i++)
    {
        arr[int(s[i])]++;
    }
    for (int i = 65; i < 123; i++)
    {
        if ((i > 90) && (i < 97))
            continue;
        if (arr[i] != 0)
        {
            cout << char(i) << ' ' << arr[i] << endl;
        }
    }
    return 0;
}
