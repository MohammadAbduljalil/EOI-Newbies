#include <iostream>

using namespace std;

int main()
{
    int N; cin >> N;
    if (N < 2)
    {
      cout << -1;
    } else
    {
      for (int i = 2; i <= N; i += 2)
      {
        cout << i << endl;
      }
    }
    return 0;
}
