#include <iostream>

using namespace std;

int main()
{
  int A; int B; int C;
  char S; char Q;
  cin >> A >> S >> B >> Q >> C;
  if (S == '+')
  {
    if ((A + B) == C)
    {
      cout << "Yes";
    } else
    {
      cout << A + B;
    }
  } else if (S == '-')
  {
    if ((A - B) == C)
    {
      cout << "Yes";
    } else
    {
      cout << A - B;
    }
  } else if (S == '*')
  {
    if ((A * B) == C)
    {
      cout << "Yes";
    } else
    {
      cout << A * B;
    }
  }
  return 0;
}
