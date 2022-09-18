#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while (getline(cin, str, '\n'))
    {
        int l = str.length();
        for (int i = 0; i < l; i++)
            str[i] = str[i] - 7;
        cout << str << endl;
    }
}
