#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    long long i = 0;
    while (scanf("%c", &ch) == 1)
    {
        if (ch == '"')
        {
            i++;
            if (i % 2 == 1)
            {
                cout << "``";
            }
            else if (i % 2 == 0)
            {
                cout << "''";
            }
        }
        else
        {
            cout << ch;
        }
    }
}
