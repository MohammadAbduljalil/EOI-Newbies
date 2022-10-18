#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    long long sum = 0;
    if ((N%2) == 1)
    {
        N--;
    }
    while (N != 0)
    {
        sum += N;
        N-=2;
    }
    /*if ((N%2) == 0)
    {
        while (N != 0)
        {
          sum += N;
          N -= 2;
        }
    } else
    {
        N--;
        while (N != 0)
        {
          sum += N;
          N -= 2;
        }
    }*/
    cout << sum;
    return 0;
}
