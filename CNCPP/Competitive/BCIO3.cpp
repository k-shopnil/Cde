#include <iostream>
using namespace std;
int main()
{
    int t, h, m, tl;
    cin >> t;
    while (t--)
    {
        cin >> h >> m;
        tl = (23 - h) * 60 + 60 - m;
        cout << tl << endl;
    }
}