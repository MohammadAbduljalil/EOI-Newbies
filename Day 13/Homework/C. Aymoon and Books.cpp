#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> shelf;
    set<int, greater<int>> table;
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        shelf.push_back(x);
    }
    int q; cin >> q;
    while (q--)
    {
        char x; cin >> x;
        if (x == 'Q')
        {
            if (table.empty())
            {
                cout << -1 << '\n';
            } else
            {
                set<int>::iterator itr = table.begin();
                cout << *itr << '\n';
                table.erase(itr);
            }
        } else if (x == 'L' && !shelf.empty())
        {
            vector<int>::iterator itr = shelf.begin();
            table.insert(*itr);
            shelf.erase(itr);
        } else if (x == 'R' && !shelf.empty())
        {
            vector<int>::iterator itr = shelf.end() - 1;
            table.insert(*itr);
            shelf.erase(itr);
        }
    }
    return 0;
}


