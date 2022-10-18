#include <iostream>

using namespace std;

int main()
{
    int T; cin >> T;
    while (T != 0)
    {
      int x = 0; int y = 0; cin >> x >> y;
      int sum = 0;
      if (x < y)
      {
        for (int i = x; i < y; i++)
        {
          if ((i != x) && (i != y) && ((i%2) == 1))
          {
            sum += i;
          }
        }
      } else if (y < x)
      {
        for (int i = y; i < x; i++)
        {
          if ((i != x) && (i != y) && ((i%2) == 1))
          {
            sum += i;
          }
        }
      } else
      {
        sum = 0;
      }
      cout << sum << endl;
      T--;
    }
    return 0;
}
