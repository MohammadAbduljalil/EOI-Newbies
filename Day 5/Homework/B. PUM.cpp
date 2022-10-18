#include <iostream>
using namespace std;
int main()
{
  int x; cin >> x;
  for (int j = 1; j <= (4*x); j++)
  {
    if ((j%4) == 0)
    {
      cout << "PUM" << endl;
      continue;
    }
    cout << j << " ";
  }
  return 0;
}
