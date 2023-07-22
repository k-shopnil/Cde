#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, x, y, d;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        d = x - y;
        if (d == 1)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}