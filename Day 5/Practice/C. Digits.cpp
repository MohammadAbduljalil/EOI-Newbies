#include <iostream>

using namespace std;

int main()
{
  int T; cin >> T;
  while (T != 0)
  {
    long long x; cin >> x;
    int x0 = x/1000000000;
    int x1 = (x%1000000000)/100000000;
    int x2 = (x%100000000)/10000000;
    int x3 = (x%10000000)/1000000;
    int x4 = (x%1000000)/100000;
    int x5 = (x%100000)/10000;
    int x6 = (x%10000)/1000;
    int x7 = (x%1000)/100;
    int x8 = (x%100)/10;
    int x9 = x%10;
    if (x < 10)
    {
      cout << x9 << endl;
    } else if (x < 100)
    {
      cout << x9 << " " << x8 << endl;
    } else if (x < 1000)
    {
      cout << x9 << " " << x8 << " " << x7 << endl;
    } else if (x < 10000)
    {
      cout << x9 << " " << x8 << " " << x7 << " " << x6 << endl;
    } else if (x < 100000)
    {
      cout << x9 << " " << x8 << " " << x7 << " " << x6 << " " << x5 << endl;
    } else if (x < 1000000)
    {
      cout << x9 << " " << x8 << " " << x7 << " " << x6 << " " << x5 << " " << x4 << endl;
    } else if (x < 10000000)
    {
      cout << x9 << " " << x8 << " " << x7 << " " << x6 << " " << x5 << " " << x4 << " " << x3 << endl;
    } else if (x < 100000000)
    {
      cout << x9 << " " << x8 << " " << x7 << " " << x6 << " " << x5 << " " << x4 << " " << x3 << " " << x2 << endl;
    } else if (x < 1000000000)
    {
      cout << x9 << " " << x8 << " " << x7 << " " << x6 << " " << x5 << " " << x4 << " " << x3 << " " << x2 << " " << x1 << endl;
    } else if (x < 10000000000)
    {
      cout << x9 << " " << x8 << " " << x7 << " " << x6 << " " << x5 << " " << x4 << " " << x3 << " " << x2 << " " << x1 << " " << x0 << endl;
    }
    T--;
  }
    return 0;
}
