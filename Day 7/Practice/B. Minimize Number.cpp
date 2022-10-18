#include <iostream>
using namespace std;
int main()
{
    int x; cin >> x;
    long long arr[x];
    bool Even = false;
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    while (true)
    {
        for (int i = 0; i < x; i++)
        {
            if (arr[i]%2 == 0)
            {
                Even = true;
            } else
            {
                Even = false;
                break;
            }
        }
        if (Even)
        {
            for (int i = 0; i < x; i++)
            {
                arr[i] /= 2;
            }
            count++;
            Even = false;
        } else
        {
            break;
        }
    }
    cout << count;
    return 0;
}
