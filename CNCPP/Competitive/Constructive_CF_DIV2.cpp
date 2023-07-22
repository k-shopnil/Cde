#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define int long long
int MX(set<int> x, int n)
{
    int minex;
    for (int i = 0; i <= n; i++)
    {
        if (x.find(i) == x.end())
        {
            minex = i;
            break;
        }
    }
    return minex;
}
signed main()
{
    int n, t, mex;
    vector<int> v(n);
    set<int> st, st_new;
    cin >> t;
    while (t--)
    {
        st.clear();
        st_new.clear();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }

        mex = MX(st, n);
        // cout << mex << endl;
        if (st.find(mex + 1) == st.end() && mex != n)
        {
            cout << "Yes" << endl;
        }
        else if (mex == n)
        {
            cout << "No" << endl;
        }
        else
        {
            int lr, ur;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == mex + 1)
                {
                    lr = i;
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (v[i] == mex + 1)
                {
                    ur = i;
                    break;
                }
            }
            for (int i = lr; i <= ur; i++)
            {
                v[i] = mex;
            }
            for (int i = 0; i < n; i++)
            {
                st_new.insert(v[i]);
            }
            int M2 = MX(st_new, n);
            // cout << M2 << endl;
            // for (int i = 0; i < n; i++)
            // {
            //     cout << v[i];
            // }
            // cout << endl;
            if (M2 == mex + 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
