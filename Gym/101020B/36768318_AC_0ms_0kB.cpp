#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h;
        cin >> w >> h;
        if ((w * h) % 2 == 0)
        {
            cout << "Hasan" << endl;
        }
        else
        {
            cout << "Hussain" << endl;
        }
    }
}