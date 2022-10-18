#include <iostream>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char s; int n; cin >> s >> n;
    while (n--)
    {
        int x; cin >> x;
        for (int i = 0; i < x; i++)
        {
            cout << s;
        }
        cout << '\n';
    }
    return 0;
}
