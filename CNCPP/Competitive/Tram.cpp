#include <iostream>
using namespace std;
int main()
{
    int a, b, n, prev = 0, pass, mincap = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        pass = b - a + prev;
        if (pass > mincap)
        {
            mincap = pass;
        }
        prev = pass;
    }
    cout << mincap;
}