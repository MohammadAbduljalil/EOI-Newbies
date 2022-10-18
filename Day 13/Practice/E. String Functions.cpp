#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x; cin >> n >> x;
    string s; cin >> s;
    while (x != 0)
    {
        string q; cin >> q;
        if (q == "pop_back")
        {
            s.pop_back();
        } else if (q == "front")
        {
            cout << s[0] << endl;
        } else if (q == "back")
        {
            cout << s[s.length()-1] << endl;
        } else if (q == "sort")
        {
            int a, b; cin >> a >> b;
            if (a > b)
            {
                swap(a,b);
            }
            a--;
            sort(s.begin() + a, s.begin() + b);
        } else if (q == "reverse")
        {
            int a, b; cin >> a >> b;
            if (a > b)
            {
                swap(a,b);
            }
            a--;
            reverse(s.begin() + a, s.begin() + b);
        } else if (q == "print")
        {
            int a; cin >> a;
            cout << s[a-1] << endl;
        } else if (q == "substr")
        {
            int a, b; cin >> a >> b;
            a--;
            cout << s.substr(a, b-a) << endl;
        } else if (q == "push_back")
        {
            char a; cin >> a;
            s = s + a;
        }
        x--;
    }
    return 0;
}
