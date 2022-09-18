#include <bits/stdc++.h>
using namespace std;

#define m 1000000007

int main()
{
    int n, answer = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        answer = (answer * 2) % m;
        }
    cout << answer;
}