#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, x;
    cin >> s >> x;
    int d = 0;
    while (1)
    {
        if (s == 0)
        {
            break;
        }
        s =s/ x;
        d++;
    }
    cout << d;
}