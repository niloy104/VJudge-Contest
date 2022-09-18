#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, temp;
        int rem = 2;
        cin >> a >> b;
        if (a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        rem = a % b;
        while (1)
        {
            if (rem == 0)
            {
                cout << "NOT GOOD" << endl;
                break;
            }
            if (rem == 1)
            {
                cout << "GOOD" << endl;
                break;
            }
            a = b;
            b = rem;
            rem = a % b;
        }
    }
}
