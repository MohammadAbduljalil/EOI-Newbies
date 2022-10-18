#include <iostream>
#include <queue>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    queue<long long> q;
    while (t--)
    {
        string query; cin >> query;
        if (query == "push")
        {
            long long x; cin >> x;
            q.push(x);
        } else if (query == "pop")
        {
            q.pop();
        } else if (query == "front")
        {
            cout << q.front() << "\n";
        } else
        {
            cout << q.back() << "\n";
        }
    }
    return 0;
}
