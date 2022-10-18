#include <iostream>

using namespace std;

int main()
{
    int X; cin >> X;
    int Y = X/1000;
    if (Y%2 == 0)
    {
        cout << "EVEN";
    } else
    {
        cout << "ODD";
    }
    return 0;
}
