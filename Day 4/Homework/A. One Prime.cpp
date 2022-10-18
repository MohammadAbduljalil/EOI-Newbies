#include <iostream>

using namespace std;

int main()
{
    int x; cin >> x;
    bool prime;
    if ((x == 2) || (x == 3) || (x == 5) || (x == 7))
    {
      prime = 1;
    } else
    {
      for (int i = 2;i <= x/2; i++)
      {
        if (((x%i) == 0) && (x != i))
        {
          prime = 0;
          break;
        } else
        {
          prime = 1;
        }
      }
    }
    if (prime)
    {
      cout << "YES";
    } else
    {
      cout << "NO";
    }
    return 0;
}
