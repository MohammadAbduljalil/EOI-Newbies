#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x; getline(cin, x);
    int prefixSum[x.size()];
    if (x[0] == 'a')
    {
        prefixSum[0] = 1;
    } else
    {
        prefixSum[0] = 0;
    }
    for (int i = 1; i < x.size(); i++)
    {
        if (x[i] == 'a')
        {
            prefixSum[i] = prefixSum[i-1] + 1;
        } else
        {
            prefixSum[i] = prefixSum[i-1];
        }
    }
    int q; cin >> q;
    while (q--)
    {
        int l, r; cin >> l >> r;
        l--; r--;
        if (l == 0)
        {
            cout << prefixSum[r] << "\n";
        } else
        {
            cout << prefixSum[r] - prefixSum[l - 1] << "\n";
        }

    }
    return 0;
}



