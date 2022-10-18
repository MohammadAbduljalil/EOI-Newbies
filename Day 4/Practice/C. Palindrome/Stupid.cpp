#include <iostream>

using namespace std;

int main()
{
    int x; cin >> x;
    int reversedx;
    // x/1 removes any leading zeros
    // 1221 , 10,000,000
    int x0 = x/10000000;
    int x1 = (x%10000000)/1000000;
    int x2 = (x%1000000)/100000;
    int x3 = (x%100000)/10000;
    int x4 = (x%10000)/1000;
    int x5 = (x%1000)/100;
    int x6 = (x%100)/10;
    int x7 = x%10;
    if (x < 10)
    {
      reversedx = x7;
    } else if (x < 100)
    {
      reversedx = x6 + (10 * x7);
    } else if (x < 1000)
    {
      reversedx = x5 + (10 * x6) + (100 * x7);
    } else if (x < 10000)
    {
      reversedx = x4 + (10 * x5) + (100 * x6) + (1000 * x7);
    } else if (x < 100000)
    {
      reversedx = x3 + (10 * x4) + (100 * x5) + (1000 * x6) + (10000 * x7);
    } else if (x < 1000000)
    {
      reversedx = x2 + (10 * x3) + (100 * x4) + (1000 * x5) + (10000 * x6) + (100000 * x7);
    } else if (x < 10000000)
    {
      reversedx = x1 + (10 * x2) + (100 * x3) + (1000 * x4) + (10000 * x5) + (100000 * x6) + (1000000 * x7);
    } else if (x < 100000000)
    {
      reversedx = x0 + (10 * x1) + (100 * x2) + (1000 * x3) + (10000 * x4) + (100000 * x5) + (1000000 * x6) + (10000000 * x7);
    }
    reversedx /= 1;
    cout << reversedx << endl;
    if (x == reversedx)
    {
      cout << "YES";
    } else
    {
      cout << "NO";
    }
    return 0;
}
