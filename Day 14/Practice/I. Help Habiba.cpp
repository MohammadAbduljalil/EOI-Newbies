#include <iostream>

using namespace std;


int main()
{
    long long a, b, x; cin >> a >> b >> x;
    if (a > b)
        swap(a, b);
    if (a%x == 0)
    {
        cout << (b/x) - (a/x) + 1;
    } else
    {
        cout << (b/x) - (a/x);
    }
    return 0;
}
// Some help by Google :)
