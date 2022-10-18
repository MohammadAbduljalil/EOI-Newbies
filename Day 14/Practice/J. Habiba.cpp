#include <iostream>
#include <set>

using namespace std;


int main()
{
    set<char> st;
    string x; cin >> x;
    for (int i = 0; i < x.size(); i++)
    {
        if ((st.find(x[i]) == st.end()) && (st.find(x[i] - 32) == st.end()) && (st.find(x[i] + 32) == st.end()))
        {
            st.insert(x[i]);
        }
    }
    cout << st.size();
    return 0;
}
