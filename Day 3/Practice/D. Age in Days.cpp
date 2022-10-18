#include <iostream>

using namespace std;

int main()
{
  int Age;
  cin >> Age;
  int Years = Age/365;
  int Months = (Age%365)/30;
  int Days = (Age - (Years * 365))%30;
  cout << Years << " years" << endl << Months << " months" << endl << Days << " days" << endl;
  return 0;
}
