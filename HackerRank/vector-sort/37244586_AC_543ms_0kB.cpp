#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int main()
{
    int n, a = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}