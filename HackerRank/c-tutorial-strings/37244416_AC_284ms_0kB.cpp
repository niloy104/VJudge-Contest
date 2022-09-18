#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    char ch = b[0];
    char ch2 = a[0];
    cout << a.length() << " " << b.length() << "\n"
         << a + b << "\n";
    cout << ch + a.erase(0, 1) << " " << ch2 + b.erase(0, 1);
    return 0;
}