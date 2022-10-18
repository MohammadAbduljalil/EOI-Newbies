#include <iostream>

using namespace std;

int main()
{
    int A; int B; char S;
    cin >> A >> S >> B;
    if (S == '>')
    {
        if (A > B)
        {
            cout << "Right";
        } else
        {
            cout << "Wrong";
        }
    } else if (S == '<')
    {
        if (A < B)
        {
            cout << "Right";
        } else
        {
            cout << "Wrong";
        }
    } else if (S == '=')
    {
        if (A == B)
        {
            cout << "Right";
        } else
        {
            cout << "Wrong";
        }
    }
    return 0;
}
