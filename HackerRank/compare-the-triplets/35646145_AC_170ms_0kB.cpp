#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0, y = 0;
    int a[3], b[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i] && a[i] != b[i])
        {
            x++;
        }
        else if (a[i] <b[i] && a[i] != b[i])
        {
            y++;
        }
    }

    cout << x << " " << y << endl;
}