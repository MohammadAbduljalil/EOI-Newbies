#include <iostream>

using namespace std;


int main()
{
    string x; getline(cin, x);
    int num = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == 'a'||x[i] == 'e'||x[i] == 'i'||x[i] == 'o'||x[i] == 'u'||x[i] == 'A'||x[i] == 'E'||x[i] == 'I'||x[i] == 'O'||x[i] == 'U')
            num++;
    }
    cout << num;
    return 0;
}
