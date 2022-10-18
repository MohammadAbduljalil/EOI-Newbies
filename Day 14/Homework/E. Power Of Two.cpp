#include <iostream>
#include <cmath>


using namespace std;
int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n; cin >> n;
    long long x = 0;
    long long sum = 0;
    for (int i = log2(n-x); (x+pow(2,i)) < n; i = log2(n-x))
    {
        x += pow (2, i);
        sum += i;
    }
    if (x != n)
    {
        sum += log2(n-x);
        x += pow(2, log2(n-x));
    }
    cout << sum;*/
    long long n; cin >> n; long long sum = 0;
    for (int i = 0; n > 0; i++)
    {
        if (n%2 != 0)
            sum += i;
        n /= 2;
    }
    cout << sum;
    return 0;
}
