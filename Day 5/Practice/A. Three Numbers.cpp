#include <iostream>
using namespace std;
int main()
{
    int k; int s; cin >> k >> s; // k = 2 , s = 1
    int x = 0; int y = 0; int z = 0;
    int numberOfSolutions = 0;
    while (x <= k)
    {
        y = 0;
        while (y <= k)
        {
            if (((s - (x + y + z)) <= k) && ((s - (x + y + z)) >= 0))
            {
                numberOfSolutions++;
            }
            y++;
        }
        x++;
    }
    /*for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            for (int z = 0; z <= k; z++)
            {
                if ((x + y + z) == s)
                {
                    numberOfSolutions++;
                    break;
                }
            }
        }
    }*/
    cout << numberOfSolutions;
    return 0;
}
