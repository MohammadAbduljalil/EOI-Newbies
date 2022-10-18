#include <iostream>
using namespace std;
int main()
{
    int x; cin >> x;
    long long sum = 0;
    for (int i = 0; i < x; i++)
    {
        long long x;
        cin >> x;
        sum += x;
    }
    if (sum < 0)
    {
        sum *= -1;
    }
    cout << sum;
    return 0;
}
