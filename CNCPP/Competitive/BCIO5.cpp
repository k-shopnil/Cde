#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n, count = 0;
    char s[100];
    cin >> n;
    // cin >> s;
    cout << n << endl;
    if (n >= 11)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '8')
            {
                count++;
            }
        }
        if (count >= 0 && count <= n / 11)
        {
            cout << count;
        }
        else
            cout << n / 11;
    }
    else
        cout << "0";
}