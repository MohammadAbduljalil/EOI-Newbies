#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ones = 0; int zeros = 0;
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            ones++;
        } else
        {
            zeros++;
        }
    }
    int diff = ones - zeros;
    if (diff < 0)
    {
        diff *= -1;
    }
    cout << diff;
    return 0;
}

