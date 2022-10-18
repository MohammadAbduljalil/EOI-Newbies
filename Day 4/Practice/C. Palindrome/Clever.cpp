#include <bits/stdc++.h>
using namespace std;

int main()
{
    string reversedx; cin >> reversedx;
    string x = reversedx;
    reverse(reversedx.begin(), reversedx.end());
    int num = stoi(reversedx);
    num /= 1;
    reversedx = to_string(num);
    cout << reversedx << '\n';
    if (x == reversedx)
    {
      cout << "YES";
    } else
    {
      cout << "NO";
    }
    return 0;
}
