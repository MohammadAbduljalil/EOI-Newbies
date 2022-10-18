#include <iostream>

using namespace std;

int main()
{
    int T; cin >> T;
    while (T != 0)
    {
      int x; cin >> x;
      long long sum = 1;
      if (x == 0)
      {
        sum = 1;
      } else
      {
        for (int i = 1; i <= x; i++)
        {
          sum *= i;
        }
      }
      cout << sum << endl;
      T--;
    }
    return 0;
}
