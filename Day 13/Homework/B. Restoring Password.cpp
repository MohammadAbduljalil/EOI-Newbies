#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x; cin >> x;
    map<string, int> mp;
    for (int i = 0; i < 10; i++)
    {
        string y; cin >> y;
        mp[y] = i;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << mp[x.substr((i*10), 10)];
    }
    return 0;
}


