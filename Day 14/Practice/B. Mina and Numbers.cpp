#include <iostream>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long x, y, z; cin >> x >> y >> z;
    long long a = (x + y - z)/2;
    long long b = (x + z - y)/2;
    long long c = (y + z - x)/2;
    cout << a << ' ' << b << ' ' << c;
    return 0;
}
