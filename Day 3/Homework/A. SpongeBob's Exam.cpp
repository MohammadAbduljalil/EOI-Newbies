#include <iostream>

using namespace std;

int main()
{
    double T; double N;
    cin >> T >> N;
    if (T >= N)
    {
        cout << "Passed :)";
    } else
    {
        cout << "Failed :(";
    }
    return 0;
}
