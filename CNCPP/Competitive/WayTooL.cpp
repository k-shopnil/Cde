#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char word[100];
    int n;
    cin >> n;
    while (n--)
    {
        cin >> word;
        int len = strlen(word);
        if (len > 10)
        {
            cout << word[0] << len - 2 << word[len - 1] << endl;
        }
        else
            cout << word << endl;
    }
}