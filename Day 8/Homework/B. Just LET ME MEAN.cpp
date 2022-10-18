#include <iostream>

using namespace std;

int main()
{
    int T; cin >> T;
    while (T != 0)
    {
        int n; long long x; cin >> n >> x;
        long long arr[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (((x*(n+1)) - sum) >= 0)
        {
            cout << "YES" << endl;
        } else
        {
            cout << "NO"<< endl;
        }
        T--;
    }
    return 0;
}
