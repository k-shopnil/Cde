#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, res;
    while (!cin.eof())
    {
        cin >> a >> b;
        res = max(a, b) - min(a, b);
        cout << res << endl;
    }
    return 0;
}