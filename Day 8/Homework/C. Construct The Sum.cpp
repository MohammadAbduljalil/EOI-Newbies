#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long n, s, sum; cin >> n >> s; sum = 0;
        long long x = n*(n+1)/2;
        vector<long long> nums;
        if (x >= s)
        {
            if (s <= n)
            {
                cout << 1 << ' ' << s << '\n'; continue;
            } else
            {
                for (int i = 0; i < n; i++)
                {
                    if (s - sum >= n-i)
                    {
                        nums.push_back(n-i); sum += (n-i);
                    } else if (s - sum != 0)
                    {
                        nums.push_back(s-sum); sum += (s - sum);
                    }
                }
                cout << nums.size() << ' ';
                for (int i = 0; i < nums.size(); i++)
                    cout << nums[i] << ' ';
            }
        } else
        {
            cout << -1;
        }
        cout << '\n';
    }
    return 0;
}
