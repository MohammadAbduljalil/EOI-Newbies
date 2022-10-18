#include <iostream>

using namespace std;

int main()
{
  int A; int B; int C;
  cin >> A >> B >> C;
  int Min; int Max;
  if ( ((A > B) && (A > C)) || ((A > B) && (A == C)) || ((A == B) && (A > C)) )
  {
    Max = A;
  } else if ( ((B > A) && (B > C)) || ((B > A) && (B == C)) || ((A == B) && (B > C)) )
  {
    Max = B;
  } else if ( ((C > B) && (C > A)) || ((C > B) && (A == C)) || ((C == B) && (C > A)) )
  {
    Max = C;
  }

  if ( ((A < B) && (A < C)) || ((A < B) && (A == C)) || ((A == B) && (A < C)) )
  {
    Min = A;
  } else if ( ((B < A) && (B < C)) || ((B < A) && (B == C)) || ((A == B) && (B < C)) )
  {
    Min = B;
  } else if ( ((C < B) && (C < A)) || ((C < B) && (A == C)) || ((C == B) && (C < A)) )
  {
    Min = C;
  }
  cout << Min << " " << Max;
  return 0;
}
// My first mistake was not handling any case of equality between two numbers
