#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v, t;
    while (cin >> v >> t)
    {
        if (v == 0 && t == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 2 * v * t << endl;
        }
    }
}