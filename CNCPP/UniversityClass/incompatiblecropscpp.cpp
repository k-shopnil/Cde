#include <bits/stdc++.h>
#define ll long long
#define ss string
#define dd double
#define in int
using namespace std;

int main()
{
    /* in t;
     cin>>t;
     while(t--)
     {
     }*/
    ll n, m, i, j, cnt = 0;

    cin >> n >> m;
    char ch[n + 5][m + 5];
    ll ar[n + 5][m + 5];
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> ch[i][j];
            ar[i][j] = 1;
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (ch[i][j] == '*')
            {
                ar[i][j] = 0;
                ar[i][j + 1] = 0;
                ar[i][j - 1] = 0;
                ar[i + 1][j] = 0;
                ar[i - 1][j] = 0;
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (ar[i][j] == 1)
                cnt++;
            cout << ar[i][j];
        }
        cout << endl;
    }
    cout << cnt << endl;
    return 0;
}