#include <iostream>

using namespace std;

int main()
{
    int N; cin >> N;
    long long max = 0;
    while (N != 0)
    {
      long long x; cin >> x;
      if (x > max)
      {
        max = x;
      }
      N--;
    }
    cout << max;
    return 0;
}
