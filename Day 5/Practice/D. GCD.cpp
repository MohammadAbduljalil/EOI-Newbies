#include <iostream>

using namespace std;

int main()
{
  int a; int b; cin >> a >> b;
  int result = min(a, b);
  while (result > 0)
  {
      if (a % result == 0 && b % result == 0)
      {
          break;
      }
      result--;
  }
  cout << result;
    return 0;
}
