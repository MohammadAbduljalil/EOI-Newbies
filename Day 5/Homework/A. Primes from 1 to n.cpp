#include <iostream>
using namespace std;
int main()
{
    int x; cin >> x;
    for (int i = 0; i <= x; i++)
    {
      bool iIsPrime;
      for (int j = 2; j <= i; j++)
      {
        if (((i%j) == 0) && (i != j))
        {
          iIsPrime = false;
          break;
        }
        iIsPrime = true;
      }
      if (iIsPrime)
      {
        cout << i << " ";
      }
    }
    return 0;
}
