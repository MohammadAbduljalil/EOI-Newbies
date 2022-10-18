#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    long long sum = 0;
    while (N != 0)
    {
      sum += N;
      N--;
    }
    cout << sum;
    /*long long sum = 0;
    for (long long i = 1;i<=N;i++)
    {
      sum += i;
    }
    cout << sum;*/
    return 0;
}
