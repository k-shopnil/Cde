#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    int a = 0, b = 0;
    getline(cin, s);
    string s2 = "hello";
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == s2[a])
        {
            a++;
            b++;
        }
    }
    if (b == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
